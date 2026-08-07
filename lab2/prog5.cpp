#include<iostream>
using namespace std;

// Created a class named MObileRecharge to manage phone account operations
class MObileRecharge{
    // Declared private data members to hold user profile data
    long long mobileNumber;  // Used a long long type to store the 10-digit number
    char CustomerName[30];   // Formed a character array for the client's name
    float CurrentBalance;    // Kept track of the remaining cash balance
    
    public:
    // Defined a function to register user credentials and starting funds
    void InputDetails(){
        cout<<"Enter mobile number : "<<endl;
        cin>>mobileNumber; // Gathered the target numeric account identifier
        
        cin.ignore(); // Cleaned out the leftover newline from the input buffer
        
        cout<<"enter Customer Name : "<<endl;
        cin.getline(CustomerName, 30); // Grabbed the full user name including spaces
        
        cout<<"enter current balance : "<<endl;
        cin>>CurrentBalance; // Picked up the initial account wallet value
    }
    
    // Defined a function to add top-up credit money to the account
    void RechargeBalance(){
        float extrabalance; // Created a temporary variable for the deposit amount
        cout<<"enter amount to be recharged in the balance : "<<endl;
        cin>>extrabalance; // Acquired the top-up value from the keyboard
        CurrentBalance += extrabalance; // Supplemented the existing funds with the addition
    }
    
    // Defined a function to purchase subscription packs using current funds
    void RechargePlan(){
        float rechargeAmount; // Set up a temporary container for the plan cost
        cout<<"enter the amount of the recharge plan you are taking : "<<endl;
        cin>>rechargeAmount; // Read the tariff package price tag
        
        // Evaluated if the wallet held enough money to make the purchase
        if(rechargeAmount>CurrentBalance){
            cout<<"Insufficient Balance"<<endl; // Denied transaction if funds ran low
        }
        else{
            CurrentBalance -= rechargeAmount; // Deducted the chosen plan fee from the wallet
            cout<<"Recharge Plan active"<<endl; // Authorized and finalized subscription
        }
    }
    
    // Defined a function to output current financial status logs
    void DisplayBalance(){
        cout<<"your account balance is : "<<CurrentBalance<<endl; // Printed final tally
    }
};

// Commenced execution workflow within standard main block entry point
int main(){
    // Instantiated a cellular account manager simulation instance named m1
    MObileRecharge m1;
    
    // Dispatched request to collect account setup metrics for m1
    m1.InputDetails();
    
    // invidiously triggered top-up routine toolsets to pad wallet cash
    m1.RechargeBalance();
    
    // Initiated deduction framework checkpoints for purchasing data packs
    m1.RechargePlan();
    
    // Displayed current updated database ledger entries to end console screen
    m1.DisplayBalance();
    
    // Conveyed correct execution exit status integer back to host environment
    return 0;
}