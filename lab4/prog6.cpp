#include<iostream>
#include<string.h>
using namespace std;
class Printer{
    string name;
    int noofpages;
    float inkLevel;
    string powerStatus;
public:
    Printer(string n,int c,float i,string p){
        name = n;
        noofpages = c;
        inkLevel = i;
        powerStatus = p;
    }
    friend class PrinterManager;
};
class PrinterManager{
public:
    void display(Printer p){
        cout<<"Name "<<p.name<<" No of pages printed "<<p.noofpages<<" ink level "<<p.inkLevel<<" power status : "<<p.powerStatus<<endl;
    }
    void turnOn(Printer* p){
        (*p).powerStatus = "ON";
        display(*p);
    }
    void turnOff(Printer* p){
        (*p).powerStatus = "OFF";
        display(*p);
    }
    void checkInkLevel(Printer* p){
        cout<<" ink level is "<<(*p).inkLevel<<endl;
    }
    void Reset(Printer* p){
        (*p).noofpages = 0;
        display(*p);
    }
};

int main(){
    Printer p1("deskjet",33,45.60,"OFF");
    PrinterManager M1;
    M1.display(p1);
    M1.turnOn(&p1);
    M1.turnOff(&p1);
    M1.Reset(&p1);
    M1.checkInkLevel(&p1);
    return 0;
}