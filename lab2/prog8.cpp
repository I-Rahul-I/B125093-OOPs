#include<iostream>
using namespace std;
class HostelFee{
    char Name[30];
    int HostelId;
    float MonthlyFee;
    int NoOfMonths;
    float Total;
    public:
    void AcceptDetails(){
        cout<<"enter name of the student "<<endl;
        cin.getline(Name, 30);
        cout<<"enter Hostel id "<<endl;
        cin>>HostelId;
        cout<<"enter monthly fee of the hostel "<<endl;
        cin>>MonthlyFee;
        cout<<"enter number of months "<<endl;
        cin>>NoOfMonths;
    }
    void TotalFee(){
        Total = MonthlyFee*NoOfMonths;
        cout<<"total fee is "<<Total<<endl;
    }
    void ApplyFine(){
        Total += 500;
        cout<<"Fine of 500 is applied due to delay in payment of fee"<<endl;
    }
    void DisplayFinalFee(){
        cout<<"total amount payable is "<<Total<<endl;
    }
};
int main(){
    HostelFee h1;
    h1.AcceptDetails();
    h1.TotalFee();
    h1.ApplyFine();
    h1.DisplayFinalFee();
    return 0;
}