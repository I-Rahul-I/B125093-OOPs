#include<iostream>
using namespace std;
class Car{
    int CarNumber;
    char BrandName[30];
    int ModelYear;
public:
    void InputDetails(){
        cout<<"enter car number :"<<endl;
        cin>>CarNumber;
        cout<<"enter brand name :"<<endl;
        cin>>BrandName;
        cout<<"enter model Year :"<<endl;
        cin>>ModelYear;
    }
    void DisplayDetails(){
        cout<<"Car number is "<<CarNumber<<endl;
        cout<<"brand name is "<<BrandName<<endl;
        cout<<"model year is "<<ModelYear<<endl;
    }
};

int main(){
    Car car1;
    car1.InputDetails();
    car1.DisplayDetails();
    return 0;
}