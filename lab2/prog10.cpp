#include<iostream>
using namespace std;
class WaterBill{
    int ConsumerNumber;
    char ConsumerName[30];
    float WaterConsumption;
    float total;
    public:
    void AcceptDetails(){
        cout<<"enter consumer Number :"<<endl;
        cin>>ConsumerNumber;
        cin.ignore();
        cout<<"enter consumer name :"<<endl;
        cin.getline(ConsumerName, 30);
        cout<<"enter water consumption in litres :"<<endl;
        cin>>WaterConsumption;
    }
    void CalcBill(){
        if(WaterConsumption<=500) total=(WaterConsumption*2);
        else if(WaterConsumption<=1000) total= 500*2 + (WaterConsumption-500)*3;
        else total = 500*2 + 500*3 + (WaterConsumption-1000)*5;
        cout<<"Bill Calculated."<<endl;
    }
    void DisplayBill(){
        cout<<"Consumer Number is : "<<ConsumerNumber<<endl;
        cout<<"Consumer Name is : "<<ConsumerName<<endl;
        cout<<"Water Consumption is : "<<WaterConsumption<<endl;
        cout<<"Total bill is : "<<total<<endl;
    }
};
int main(){
    WaterBill w1;
    w1.AcceptDetails();
    w1.CalcBill();
    w1.DisplayBill();
    return 0;
}