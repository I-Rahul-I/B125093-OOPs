#include<iostream>
#include<string.h>
using namespace std;
class Exhibit{
    string name;
    int id;
    int count;
    string status;
public:
    Exhibit(string n,int i,int c,string s){
        name = n;
        id = i;
        count = c;
        status = s;
    }
    friend class MuseumManager;
};

class MuseumManager{
public:
    void display(Exhibit e){
        cout<<"name "<<e.name<<" id "<<e.id<<" visitors count "<<e.count<<" status "<<e.status<<endl;
    }
    void addvisitors(Exhibit* e){
        int n;
        cout<<"enter number of visitors to add : ";
        cin>>n;
        (*e).count= (*e).count + n;
        display(*e);
    }
    void reset(Exhibit* e){
        (*e).count = 0;
        display(*e);
    }
    void Open(Exhibit* e){
        (*e).status = "OPEN";
        display(*e);
    }
    void Close(Exhibit* e){
        (*e).status = "CLOSED";
        display(*e);
    }
    void displaystatus(Exhibit* e){
        cout<<"Current status of exhibit "<<(*e).status<<endl;
    }
};

int main(){
    Exhibit e1("dinosaur",101,58,"CLOSED");
    MuseumManager m1;
    m1.display(e1);
    m1.Open(&e1);
    m1.Close(&e1);
    m1.addvisitors(&e1);
    m1.reset(&e1);
    m1.displaystatus(&e1);
    return 0;
}