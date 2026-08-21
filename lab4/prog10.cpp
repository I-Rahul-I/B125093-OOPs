#include<iostream>
#include<string.h>
using namespace std;
class Classroom{
    string name;
    int noofstudents;
    int present;
    string status;
public:
    Classroom(string n,int t,int p,string s){
        name = n;
        noofstudents = t;
        present = p;
        status = s;
    }
    friend class AttendanceManager;
};
class AttendanceManager{
public:
    void display(Classroom c){
        cout<<"class name is "<<c.name<<" total students "<<c.noofstudents<<" present "<<c.present<<" attendance status "<<c.status<<endl;
    }
    void update(Classroom* c){
        int n;
        cout<<"enter updated present students ";
        cin>>n;
        (*c).present = n;
    }
    void completed(Classroom* c){
        (*c).status = "COMPLETED";
    }
    void check(Classroom* c){
        if((*c).status == "COMPLETED") cout<<"completed"<<endl;
        else cout<<"not completed"<<endl;
    }
    void absent(Classroom* c){
        cout<<"no of absent students is "<<(*c).noofstudents - (*c).present<<endl;
    }
};

int main(){
    Classroom c1("10f",40,23,"NOT COMPLETED");
    AttendanceManager a1;
    a1.display(c1);
    a1.update(&c1);
    a1.completed(&c1);
    a1.check(&c1);
    a1.absent(&c1);
    return 0;
}