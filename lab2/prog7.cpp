#include<iostream>
using namespace std;

// Created a class named MovieTicket to handle cinema booking logs and receipts
class MovieTicket{
    // Declared private variables to hold specific booking parameters
    char MovieName[30]; // Formed a character array for storing the film's title
    float TktPrice;     // Saved the financial cost of a single seating pass
    int NoOfTickets;    // Tracked the count of seats being reserved
    
    public:
    // Defined a method to ingest order details from the standard console input
    void AcceptDetails(){
        cout<<"enter Movie Name : "<<endl;
        cin.getline(MovieName, 30); // Grabbed the complete film name including spaces
        
        cout<<"enter ticket price : "<<endl;
        cin>>TktPrice; // Read and assigned the individual item valuation
        
        cout<<"enter number of tickets : "<<endl;
        cin>>NoOfTickets; // Captured the quantitative volume of entries needed
    }
    
    // Defined a process to immediately print out a raw product price total
    void TotalCost(){
        cout<<"total ticket cost is : "<<TktPrice*NoOfTickets<<endl; // Evaluated multiplication on the fly
    }
    
    // Defined a reporting function to display an itemised statement sheet
    void Summary(){
        cout<<"Movie name is "<<MovieName<<endl;
        cout<<"Price of each ticket is "<<TktPrice<<endl;
        cout<<"total tickets purchased "<<NoOfTickets<<endl;
        cout<<"Total cost is "<<TktPrice*NoOfTickets<<endl; // Displayed final aggregate calculation
    }
};

// Formulated the primary control framework node to execute logic sequences
int main(){
    // Instantiated a reservation tracking object block designated as m1
    MovieTicket m1;
    
    // Dispatched user interface routines to harvest entry fields for m1
    m1.AcceptDetails();
    
    // Executed quick check routines to broadcast simple cost metrics
    m1.TotalCost();
    
    // Triggered the consolidated diagnostic printouts onto standard viewers
    m1.Summary();
    
    // Returned control state zero to indicate flawless exit confirmation
    return 0;
}