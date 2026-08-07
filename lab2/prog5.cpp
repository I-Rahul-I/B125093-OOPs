#include<iostream>
using namespace std;
class MObileRecharge{
    long long mobileNumber;
    char CustomerName[30];
    float CurrentBalance;
    public:
    void InputDetails(){
        cout<<"Enter mobile number : "<<endl;
        cin>>mobileNumber;
        cin.ignore();
        cout<<"enter Customer Name : "<<endl;
        cin.getline(CustomerName, 30);
        cout<<"enter current balance : "<<endl;
        cin>>CurrentBalance;
    }
    void RechargeBalance(){
        float extrabalance;
        cout<<"enter amount to be recharged in the balance : "<<endl;
        cin>>extrabalance;
        CurrentBalance += extrabalance;
    }
    void RechargePlan(){
        float rechargeAmount;
        cout<<"enter the amount of the recharge plan you are taking : "<<endl;
        cin>>rechargeAmount;
        if(rechargeAmount>CurrentBalance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            CurrentBalance -= rechargeAmount;
            cout<<"Recharge Plan active"<<endl;
        }
    }
    void DisplayBalance(){
        cout<<"your account balance is : "<<CurrentBalance<<endl;
    }
};
int main(){
    MObileRecharge m1;
    m1.InputDetails();
    m1.RechargeBalance();
    m1.RechargePlan();
    m1.DisplayBalance();
    return 0;
}