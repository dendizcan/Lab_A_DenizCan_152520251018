#include <iostream>
#include <string>
using namespace std;
struct Node{
    string data;
    Node* next;

    Node(string val){
        data = val;
        next= nullptr;
    }
};

class TextEditor{
    private:
    Node* head;
    public:
    TextEditor(){
        head= nullptr;
    }
    void addWord(string word){
        Node* newNode= new Node(word);
        if(head== nullptr){
            head=newNode;
            return;
        }
        Node* temp =head;
        while(temp->next != nullptr){
            temp=temp->next;

        }
        temp->next=newNode;
    }
    void undo(){
        if(head== nullptr){
            cout<< "nothing to undo!"<< endl;
            return;

        }
        if(head->next== nullptr){
            delete head;
            head= nullptr;
            return;
        }
        Node* temp =head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next=nullptr;

    }
    void display(){
        Node* temp=head;
        while(temp != nullptr){
            cout << "["<< temp->data<<"] ->";
            temp =temp->next;
        }
        cout << "NULL" << endl;

    }
    ~TextEditor(){
        while(head != nullptr){
            Node* temp= head;
            head=head-> next;
            delete temp;

        }
    }
};
int main(){
    TextEditor editor;
    string input;
    cout << "--- Simple Linked List Text Editor ---" << endl;
    cout << "Type words to add them." << endl;
    cout << "Type 'UNDO' to remove the last word." << endl;
    cout << "Type 'EXIT' to quit the program." << endl;
    cout << "--------------------------------------" << endl;
}while (true) {
        cout << "\nInput: ";
        cin >> input;

        if (input == "EXIT") {
            cout << "Exiting editor. Goodbye!" << endl;
            break;
        } else if (input == "UNDO") {
            editor.undo();
        } else {
            editor.addWord(input);
        }

        // Display the list after every operation
        editor.display();
    }

    return 0;
}