#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

struct package{
string packageID;
string destinationCity;
int dimensions[3];


package* next;

package(string id,string destination, int l,int w, int h){
packageID = id;
destinationCity = destination;
dimensions[0]=l;
dimensions[1]=w;
dimensions[2]=h;

next=nullptr;


}
};
class packageStack{
private:
package* topNode;
public:
    packageStack(){
    topNode = nullptr;
    }
    void push(string id,string destination,int l,int w,int h){
    package*newPackage =newPackage(id,destination,l,w,h);
    newPackage->next=topNode;
    topNode=newPackage;
    cout<<"package"<< id<< "added to the stack"<<endl;

    }
    bool pop(string& outid,string& outDestination){
    if(isEmpty()){
        return false;

    }
    package* temp =topNode;
    outid= temp->packageID;
    outDestination=temp->destinationCity;
     topNode=topNode->next;
     delete temp;
     return true;
    }

    bool isEmpty(){
    return topNode==nullptr;
    }
    void display(){
    cout<<"packages in stack"<<endl;
    if(isEmpty()){
        cout<<"no package in stack"<<endl;
        return ;
    }
    package* current= topNode;

    while(current !=nullptr){
        cout<<"package ID:"<<current->packageID<<endl;
        cout<<"destination:"<<current->destinationCity<<endl;
        cout<<"dimensions:"<<current->dimensions[0]<<"x"<<curren->dimensions[1]<<"x"<<current->dimensions[2]<<"x"<<endl;
        current = current->next;

    }
    }
    packageStack(){
    while(topNode !=nullptr){
        package* temp= topNode;
        topNode=topNode->next;
        delete temp;
    }

    }

};

struct  courier{
string courierName;
string vehicleType;

};
class courierQueue{
private:
    static const int SIZE=5;
    courierQueue[SIZE];
    int front;
    int rear;
    int count;
public:
    courierQueue(){
    front=0;
    rear=-1;
    count=0;
    }
    void enqueue(string cname,string vtype){
    if(count==SIZE){
        cout<<"courier queue is full"<<cname<<endl;
        return;

    }
    rear= (rear+1)% SIZE;
    queue[rear].courierName=cname;
    queue[rear].vehicleType=vtype;
    count++;
    cout<<"courier"<<cname<<"vehicle"<<endl;


    }





















    };

int main(){
queue <string> courier;
stack <string> package;

}
