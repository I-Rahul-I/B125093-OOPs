#include<iostream>
using namespace std;

// Created a class named HotelRoom to manage guest bookings and billing
class HotelRoom{
    // Declared private attributes to hold details about the stay
    int roomNumber;       // Stored the assigned room number
    char GuestName[30];   // Created a character array for the customer's full name
    int NumberofDays;     // Held the duration of the guest's stay
    float CostPerDay;     // Saved the fixed rate charged per night
    float TotalRent;      // Tracked the final calculated bill balance
    
    public:
    // Defined a method to collect check-in information from the user
    void InputCustomer(){
        cout<<"enter room Number : "<<endl;
        cin>>roomNumber; // Grabbed the integer value for the room index
        
        cin.ignore(); // Cleared the trailing newline character from the buffer
        
        cout<<"enter guest name : "<<endl;
        cin.getline(GuestName, 30); // Read the full string including spaces
        
        cout<<"enter number of days staying : "<<endl;
        cin>>NumberofDays; // Captured the count of overnight stays
        
        cout<<"Enter cost per day : "<<endl;
        cin>>CostPerDay; // Acquired the floating-point pricing tier
    }
    
    // Defined a method to compute the final lodging statement costs
    void CalcRoomRent(){
        TotalRent = NumberofDays*CostPerDay; // Multiplied duration by daily price
        cout<<"Total rent is "<<TotalRent<<endl;
    }
    
    // Defined a method to render invoice sheets out to the screen
    void Display(){
        cout<<"Displaying Customer Details: "<<endl;
        cout<<"Room Number "<<roomNumber<<" Guest Name "<<GuestName<<endl;
        cout<<"Number of Days staying "<<NumberofDays<<" cost per day "<<CostPerDay<<endl;
        cout<<"Total Rent is "<<TotalRent<<endl;
    }
};

// Initiated the main pipeline execution loop
int main(){
    // Instantiated a tracking object instance named h1
    HotelRoom h1;
    
    // Triggered the routine to register customer account profile fields
    h1.InputCustomer();
    
    // Activated processing calculations for multiplying rates out
    h1.CalcRoomRent();
    
    // Rendered full report output results logs back onto the viewport
    h1.Display();
    
    // Dispatched normal finalisation code value 0 to system kernels
    return 0;
}