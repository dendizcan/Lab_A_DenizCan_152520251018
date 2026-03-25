#include <iostream>
#include <string>

using namespace std;

struct song{
string title;
string artist;
int ratings[3];
song *next;
song *prev;
 song(string t,string a,int r[]: title(t)){
for (int i =0;i<3;i++) ratings[i]=r[i];
}
};


void addsong(string title,string artist, int ratings[]){
song* newsong= new song(title, artist,ratings);
if(head==nullptr){
    head=tail=current=newsong;

}
else{
    tail->next= nextsong;
    newsong->prev=tail;
    tail=newsong;

}

}
void nextsong(){
if(current&& current->next){
    current=currrent->next;
    cout<<"moved to:"<<current->title<<endl;
}
else {
    cout<<"at the end of the playlist"<<endl;

}
}
void prevsong(){
if(current&& current->prev){
    current=current->prev;
    cout<<"moved back to:"<<current->title<<endl;
}
else{
    cout<<"at the start of th playlist."<<endl;
}
}
void removecurrent(){
if(current==nullptr);
return;
song* todelete=current;
if(todelete->prev) todelete->prev->next=todelete->next;
if(todelete->next) todelete->next->prev->=todelete->prev;
if(todelete==head)head=todelete->next;
if(todelete==tail)tail=todelete->prev;
current=(todelete->next)? todelete->next:todelete->prev;

delete todelete;
cout<<"current song removed."<<endl;
}

