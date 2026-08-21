#include<iostream>
#include<string.h>
using namespace std;
class VehicleService{
    int number;
    string name;
    string status;
    float kilometers;
public:
    VehicleService(int n,string s,string stat,float km){
        number = n;
        name = s;
        status = stat;
        kilometers = km;
    }
    friend class ServiceManager;
};
class ServiceManager{
public:
    void display(VehicleService v){
        cout<<"number "<<v.number<<" name "<<v.name<<" status "<<v.status<<" last service kilometers "<<v.kilometers<<endl;
    }
    void completed(VehicleService* v){
        (*v).status = "COMPLETED";
        display(*v);
    }
    void upddate(VehicleService* v){
        int n;
        cout<<"enter updated kilometers : ";
        cin>>n;
        (*v).kilometers = n;
        display(*v);
    }
    void check(VehicleService* v){
        if((*v).status=="NOT COMPLETED"){
            cout<<"requires servicing";
        }
        else cout<<"doesnt require servicing";
    }
};

int main(){
    VehicleService  v1(8346,"HONDA","NOT COMPLETED",45);
    ServiceManager s1;
    s1.display(v1);
    s1.completed(&v1);
    s1.upddate(&v1);
    s1.check(&v1);
    return 0;
}