#include<iostream>
using namespace std;
class AccountBalance{
private:
    double balance;
public:
    AccountBalance(double b=0.0){
        balance = b;
    }
    AccountBalance operator -() const{
        return AccountBalance(-balance);
    }
    void display(){
        cout<<"Balance : $"<<balance<<"\n";
    }
};
int main(){
    AccountBalance acc1(250.75);
    AccountBalance acc2 = -acc1;
    cout<<"Original Account ";
    acc1.display();
    cout<<"New account ";
    acc2.display();
    return 0;
}