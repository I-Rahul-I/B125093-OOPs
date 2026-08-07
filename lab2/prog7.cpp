#include<iostream>
using namespace std;
class MovieTicket{
    char MovieName[30];
    float TktPrice;
    int NoOfTickets;
    public:
    void AcceptDetails(){
        cout<<"enter Movie Name : "<<endl;
        cin.getline(MovieName, 30);
        cout<<"enter ticket price : "<<endl;
        cin>>TktPrice;
        cout<<"enter number of tickets : "<<endl;
        cin>>NoOfTickets;
    }
    void TotalCost(){
        cout<<"total ticket cost is : "<<TktPrice*NoOfTickets<<endl;
    }
    void Summary(){
        cout<<"Movie name is "<<MovieName<<endl;
        cout<<"Price of each ticket is "<<TktPrice<<endl;
        cout<<"total tickets purchased "<<NoOfTickets<<endl;
        cout<<"Total cost is "<<TktPrice*NoOfTickets<<endl;
    }
};
int main(){
    MovieTicket m1;
    m1.AcceptDetails();
    m1.TotalCost();
    m1.Summary();
    return 0;
}