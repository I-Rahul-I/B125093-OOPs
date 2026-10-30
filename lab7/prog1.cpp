#include<iostream>
using namespace std;
class Ticket{
protected:
    string name;
    float distance;
public:
    Ticket(string n,float d){
        name = n;
        distance = d;
    }
};

class RailwayTicket : public Ticket{
    float fareperkm;
public:
    RailwayTicket(string n,float d,float k) : Ticket(n,d){
        fareperkm = k;
    }
    void CalculateFare(){
        if(distance<300){
            cout<<"Total fare is : "<<fareperkm*distance<<endl;
        }
        else{
            cout<<"Total fare is : "<<90*fareperkm*distance/100<<endl;
        }
    }
    void display(){
        cout<<"--- Passenger details ---"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Distance travelled : "<<distance<<endl;
        this->CalculateFare();
    }
};

int main(){
    RailwayTicket t1("Rahul",350,17.5);
    t1.display();
return 0;
}