#include<iostream>
using namespace std;

// Created a class named HostelFee to manage student boarding invoices and late fees
class HostelFee{
    // Declared private data fields to organize student data matrices
    char Name[30];     // Formed a character array for saving the student's name
    int HostelId;      // Kept track of the unique room allocation identifier
    float MonthlyFee;  // Stored the recurring rate charged per individual month
    int NoOfMonths;    // Held the quantitative duration of the billing cycle
    float Total;       // Maintained the rolling numeric total balance due
    
    public:
    // Defined a routine block to harvest demographic data fields from input lines
    void AcceptDetails(){
        cout<<"enter name of the student "<<endl;
        cin.getline(Name, 30); // Captured the student's full string name with whitespace
        
        cout<<"enter Hostel id "<<endl;
        cin>>HostelId; // Read and set the specific numeric hostel unit identifier
        
        cout<<"enter monthly fee of the hostel "<<endl;
        cin>>MonthlyFee; // Logged the monetary floating-point room baseline price
        
        cout<<"enter number of months "<<endl;
        cin>>NoOfMonths; // Ingested the total count of operational active months
    }
    
    // Defined an operation loop node to calculate raw operational costs
    void TotalFee(){
        Total = MonthlyFee*NoOfMonths; // Multiplied time frames by base rates to define standard fees
        cout<<"total fee is "<<Total<<endl;
    }
    
    // Defined a function process to inject fixed penalties for tardy transactions
    void ApplyFine(){
        Total += 500; // Supplemented the existing ledger balance with a flat 500 currency fine
        cout<<"Fine of 500 is applied due to delay in payment of fee"<<endl;
    }
    
    // Defined a simple viewing mechanism to print total consolidated amounts
    void DisplayFinalFee(){
        cout<<"total amount payable is "<<Total<<endl; // Echoed final balance records to output streams
    }
};

// Initiated code stream execution sequence in standard entry main block
int main(){
    // Instantiated a tracking records manager object named h1
    HostelFee h1;
    
    // Dispatched user prompt subroutines to extract starting telemetry parameters for h1
    h1.AcceptDetails();
    
    // Invoked compounding math algorithms to evaluate baseline lease commitments
    h1.TotalFee();
    
    // Activated supplementary balance calculations to apply structural late payment surcharges
    h1.ApplyFine();
    
    // Dispatched request to dump all total system balances back onto active viewer screens
    h1.DisplayFinalFee();
    
    // Passed back success metric index 0 confirming smooth runtime operation
    return 0;
}