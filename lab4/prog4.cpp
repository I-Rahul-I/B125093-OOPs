#include<iostream>
#include<string.h>
using namespace std;
class ElectricMeter{
    int meterNumber;
    string ConsumerName;
    int unitsConsumed;
public:
    ElectricMeter(int n,string s,int u){
        meterNumber = n;
        ConsumerName = s;
        unitsConsumed = u;
    }
    friend void display(ElectricMeter);
};
void display(ElectricMeter e){
    char usage[30];
    if(e.unitsConsumed<100) strcpy(usage,"Low Usage");
    else if(e.unitsConsumed>=100 && e.unitsConsumed<=300) strcpy(usage,"Moderate Usage");
    else strcpy(usage,"High Usage");
    cout<<"Consumer name : "<<e.ConsumerName<<" meter number "<<e.meterNumber<<" units consumed "<<e.unitsConsumed<<" level "<<usage<<endl;

}

int main(){
    ElectricMeter e1(101,"Rahul Op",250);
    display(e1);
    return 0;
}