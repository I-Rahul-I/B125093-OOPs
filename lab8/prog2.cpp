#include<iostream>
using namespace std;
class ElectricityPlan{
public:
    virtual void calculateBill(double units){}
};
class ResidentialPlan : public ElectricityPlan{
public:
    void calculateBill(double units) {
        if(units<=100){
            cout<<"Bill is : "<<4*units<<endl;
        }
        else{
            cout<<"Bill is : "<<(4*100 + 6*(units-100))<<endl;
        }
    }
};
class CommercialPlan : public ElectricityPlan{
public:
    void calculateBill(double units) {
        cout<<"Bill is : "<<7*units<<endl;
    }
};
int main(){
    ResidentialPlan r1;
    CommercialPlan c1;
    
    ElectricityPlan* e1;
    e1 = &r1;
    e1->calculateBill(250);
    e1 = &c1;
    e1->calculateBill(250);
return 0;
}