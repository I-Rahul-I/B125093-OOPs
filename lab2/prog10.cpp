#include<iostream>
using namespace std;

// Created a class named WaterBill to manage utility consumer profiles and tier-based billing
class WaterBill{
    // Declared private data fields to structure municipal ledger assets
    int ConsumerNumber;     // Stored the unique numerical identification account key
    char ConsumerName[30];  // Formed a character array to keep the resident's full string name
    float WaterConsumption; // Tracked total volume of liquid processed measured in litres
    float total;            // Maintained the consolidated final fiscal invoice balance
    
    public:
    // Defined a utility method to pull consumer profile properties from stream inputs
    void AcceptDetails(){
        cout<<"enter consumer Number :"<<endl;
        cin>>ConsumerNumber; // Ingested the identifier tag mapping to the client account
        
        cin.ignore(); // Cleaned out the leftover carriage return from input pipelines
        
        cout<<"enter consumer name :"<<endl;
        cin.getline(ConsumerName, 30); // Grabbed the complete name payload alongside inner spaces
        
        cout<<"enter water consumption in litres :"<<endl;
        cin>>WaterConsumption; // Captured the quantitative volume usage variable metric
    }
    
    // Defined a multi-tier conditional processing matrix to evaluate custom pricing rules
    void CalcBill(){
        // Evaluated the initial tier threshold for volume counts at or under 500 units
        if(WaterConsumption<=500) total=(WaterConsumption*2);
        // Resolved secondary progressive billing rules for middle usage bounds up to 1000 units
        else if(WaterConsumption<=1000) total= 500*2 + (WaterConsumption-500)*3;
        // Extrapolated highest tier premium surcharges on excess volume past 1000 units
        else total = 500*2 + 500*3 + (WaterConsumption-1000)*5;
        
        cout<<"Bill Calculated."<<endl;
    }
    
    // Defined a reporting function layout to present data dumps out to system screens
    void DisplayBill(){
        cout<<"Consumer Number is : "<<ConsumerNumber<<endl;
        cout<<"Consumer Name is : "<<ConsumerName<<endl;
        cout<<"Water Consumption is : "<<WaterConsumption<<endl;
        cout<<"Total bill is : "<<total<<endl; // Rendered final financial metrics calculation log
    }
};

// Commenced overall flow execution timeline inside standard main loop entry
int main(){
    // Instantiated a tracking infrastructure management object unit named w1
    WaterBill w1;
    
    // Transmitted calls to start recording personal identity and account data fields for w1
    w1.AcceptDetails();
    
    // Executed piecewise math algorithms based on progressive consumption rate brackets
    w1.CalcBill();
    
    // Triggered display layout macros to output itemized statement sheets onto the monitor
    w1.DisplayBill();
    
    // Dispatched normal finalisation code value 0 confirming smooth thread termination
    return 0;
}