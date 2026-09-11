#include<iostream>
#include<string.h>
using namespace std;
class Instrument{
    int id;
    string name;
    string accesslevel;
public:
    Instrument(int i,string n,string a){
        this->id = i;
        this->name = n;
        this->accesslevel = a;
    }
    friend class LabSupervisor;
};

class LabSupervisor{
public:
    void display(Instrument& a){
        cout<<"id "<<a.id<<" name "<<a.name<<" accesslevel "<<a.accesslevel<<endl;
    }
    void modify(Instrument& a){
        cout<<"enter accesslevel : ";
        cin>>a.accesslevel;
    }
};

int main(){
    Instrument* a = new Instrument(101,"piano","open");
    LabSupervisor* b = new LabSupervisor;
    b->display(*a);
    b->modify(*a);
    b->display(*a);

    delete a;
    a=nullptr;
    delete b;
    b=nullptr;
return 0;
}