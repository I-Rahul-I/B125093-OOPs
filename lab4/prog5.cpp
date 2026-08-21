#include<iostream>
#include<string.h>
using namespace std;
class EventParticipant{
    string name;
    int age;
    string status;
public:
    EventParticipant(string n,int a,string s){
        name = n;
        age = a;
        status = s;
    }
    friend void verifyParticipant(EventParticipant);
};

void verifyParticipant(EventParticipant e){
    if(e.age>=18 && e.status=="active"){
        cout<<"Participant name "<<e.name<<" age "<<e.age<<" status "<<e.status<<" Eligible"<<endl;
    }
    else{
        cout<<"Participant name "<<e.name<<" age "<<e.age<<" status "<<e.status<<" : Not Eligible"<<endl;
    }
}

int main(){
    EventParticipant e1("Rahul",17,"active");
    verifyParticipant(e1);
    return 0;
}