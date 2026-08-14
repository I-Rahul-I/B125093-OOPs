#include<iostream>
using namespace std;

int main(){
    int* a = new int;
    int* b = new int;
    cout<<"enter value of a:"<<endl;
    cin>>*a;
    cout<<"enter value of b:"<<endl;
    cin>>*b;
    cout<<"sum of the two numbers is "<<*a + *b<<endl;
    cout<<"difference of the two numbers is "<<*a - *b<<endl;
    cout<<"product of the two numbers is "<<(*a) * (*b)<<endl;
    cout<<"Quotient of the two numbers is "<<(*a)/(*b)<<endl;

    delete a;
    a=nullptr;
    delete b;
    b=nullptr;
    return 0;
}