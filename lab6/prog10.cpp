#include<iostream>
using namespace std;
class Bill{
    int items;
    double amount;
public:
    Bill(int i,double a){
        items = i;
        amount = a;
    }
    Bill operator+(Bill b){
        return Bill(items + b.items , amount + b.amount);
    }
    bool operator>(Bill b){
        return amount > b.amount;
    }
    void display(){
        cout<<"Items: "<<items<<", Amount: "<<amount<<endl;
    }
};
int main(){
    Bill b1(5, 100.50);
    Bill b2(3, 75.25);
    Bill b3 = b1 + b2;
    b3.display();
    cout<<boolalpha; //For true or false output otherwise it will show 0 or 1
    cout<<(b1>b2)<<endl;
    return 0;
}