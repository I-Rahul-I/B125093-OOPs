#include<iostream>
using namespace std;

// Created a class named Time to manage and calculate cumulative durations
class Time{
    // Declared private integers to hold independent structural components
    int hours1, minutes1, hours2, minutes2;
    int totalhours=0;   // Set up the accumulator for combined hours 
    int totalminutes=0; // Set up the accumulator for leftover combined minutes
    
    public:
    // Defined a method to collect dual timestamp milestones from input streams
    void InputTime(){
        cout<<"enter hour for first time value : "<<endl;
        cin>>hours1; // Captured first milestone's hour component
        
        cout<<"enter minutes for first time value : "<<endl;
        cin>>minutes1; // Captured first milestone's minute component
        
        cout<<"enter hour for second time value : "<<endl;
        cin>>hours2; // Captured second milestone's hour component
        
        cout<<"enter minutes for second time value : "<<endl;
        cin>>minutes2; // Captured second milestone's minute component
    }
    
    // Defined an operation to merge the separate timestamps into unified sums
    void AddTime(){
        // Evaluated if combined minute values triggered a whole hour overflow
        if(minutes1+minutes2>=60){
            totalhours=hours1+hours2+1; // Tallied absolute hours and carried over a full hour
            totalminutes= (minutes1+minutes2-60); // Stripped 60 units to find remaining minute slice
        }
        else{
            totalhours=hours1+hours2; // Calculated straightforward hour aggregates directly
            totalminutes= minutes1+minutes2; // Amassed simple minute values directly
        }
    }
    
    // Defined a utility block to expose calculations on system logging streams
    void DisplayTime(){
        cout<<"the resulting time is "<<totalhours<<" hours and "<<totalminutes<<" minutes"<<endl; // Rendered output logs
    }
};

// Initiated main program thread sequence entry point boundaries
int main(){
    // Instantiated a tracking system object entity named t1
    Time t1;
    
    // Transmitted calls to ingest separate operational benchmark parameters
    t1.InputTime();
    
    // Evaluated compound computational methods to consolidate individual elements
    t1.AddTime();
    
    // Rendered final structural summation records onto the interface screen
    t1.DisplayTime();
    
    // Conveyed optimal termination success signals back to active compiler hosts
    return 0;
}