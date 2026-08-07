#include<iostream>
using namespace std;
class HotelRoom{
    int roomNumber;
    char GuestName[30];
    int NumberofDays;
    float CostPerDay;
    float TotalRent;
    public:
    void InputCustomer(){
        cout<<"enter room Number : "<<endl;
        cin>>roomNumber;
        cin.ignore();
        cout<<"enter guest name : "<<endl;
        cin.getline(GuestName, 30);
        cout<<"enter number of days staying : "<<endl;
        cin>>NumberofDays;
        cout<<"Enter cost per day : "<<endl;
        cin>>CostPerDay;
    }
    void CalcRoomRent(){
        TotalRent = NumberofDays*CostPerDay;
        cout<<"Total rent is "<<TotalRent<<endl;
    }
    void Display(){
        cout<<"Displaying Customer Details: "<<endl;
        cout<<"Room Number "<<roomNumber<<" Guest Name "<<GuestName<<endl;
        cout<<"Number of Days staying "<<NumberofDays<<" cost per day "<<CostPerDay<<endl;
        cout<<"Total Rent is "<<TotalRent<<endl;
    }
};
int main(){
    HotelRoom h1;
    h1.InputCustomer();
    h1.CalcRoomRent();
    h1.Display();
    return 0;
}