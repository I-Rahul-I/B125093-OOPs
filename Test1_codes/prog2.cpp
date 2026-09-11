#include<iostream>
using namespace std;
class Drone{
    int id;
    float battery;
    float hours;
public:
    void AcceptDetails(){
        cout<<"enter drone id : ";
        cin>>this->id;
        cout<<"enter battery : ";
        cin>>this->battery;
        cout<<"enter flight hours : ";
        cin>>this->hours;
    }
    void update(float b){
        this->battery = b;
        cout<<"updated battery percentage is : "<<this->battery<<endl;
    }
    void update(float b,float h){
        this->battery = b;
        this->hours = h;
        cout<<"updated battery percentage is "<<this->battery<<" and flight hours is "<<this->hours<<endl;

    }
    friend void compareBattery(Drone,Drone);
};

void compareBattery(Drone a,Drone b){
    if(a.battery>=b.battery){
        cout<<"Drone with id "<<a.id<<" has higher battery level "<<endl;
    }
    else{
        cout<<"Drone with id "<<b.id<<" has higher battery level "<<endl;
    }
}
int main(){
    Drone* p = new Drone;
    (*p).AcceptDetails();
    Drone* q = new Drone;
    (*q).AcceptDetails();
    (*p).update(80);
    (*q).update(85,7);

    compareBattery(*p,*q);

    delete p;
    p=nullptr;
    delete q;
    q=nullptr;
return 0;
}