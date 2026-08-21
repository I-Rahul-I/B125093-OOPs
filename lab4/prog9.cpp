#include<iostream>
#include<string.h>
using namespace std;
class DigitalWallet{
    string name;
    float balance;
    string status;
public:
    DigitalWallet(string n,float b,string s){
        name = n;
        balance = b;
        status = s;
    }
    friend class WalletManager;
};

class WalletManager{
public:
    void display(DigitalWallet d){
        cout<<"name is "<<d.name<<" balance is "<<d.balance<<" status is "<<d.status<<endl;
    }
    void add(DigitalWallet* d){
        float f;
        cout<<"enter money to be added ";
        cin>>f;
        (*d).balance+= f;
        display((*d));
    }
    void deduct(DigitalWallet* d){
        float f;
        cout<<"enter money to be deducted ";
        cin>>f;
        if(f<(*d).balance){
            (*d).balance -= f;
        }
        display(*d);
    }
    void disable(DigitalWallet* d){
        (*d).status = "DISABLED";
        display(*d);
    }
    void displaystatus(DigitalWallet* d){
        cout<<"current wallet status "<<(*d).status<<endl;
    }
};

int main(){
    DigitalWallet d1("RAhul",3001,"ENABLEd");
    WalletManager w1;
    w1.display(d1);
    w1.deduct(&d1);
    w1.add(&d1);
    w1.disable(&d1);
    w1.displaystatus(&d1);
    return 0;
}