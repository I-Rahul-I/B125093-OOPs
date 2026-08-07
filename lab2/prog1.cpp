#include<iostream> 
using namespace std; 

// Created a class named Car to represent vehicle objects
class Car {
    // Declared private variables to store the car's attributes
    int CarNumber;       // Held the unique registration number
    char BrandName[30];  // Stored the brand name as a character array
    int ModelYear;       // Saved the year the car was manufactured

public: 
    // Defined a function to get input data from the user
    void InputDetails() {
        cout << "enter car number : " << endl; 
        cin >> CarNumber; // Read and assigned the car number
        
        cout << "enter brand name : " << endl; 
        cin >> BrandName; // Read and assigned the brand name
        
        cout << "enter model Year : " << endl; 
        cin >> ModelYear; // Read and assigned the model year
    } 

    // Defined a function to print the stored information
    void DisplayDetails() {
        cout << "Car number is " << CarNumber << endl; 
        cout << "brand name is " << BrandName << endl; 
        cout << "model year is " << ModelYear << endl; 
    } 
}; 

// Started the execution of the main program
int main() {
    // Instantiated an object named car1 from the Car class
    Car car1; 
    
    // Called the method to prompt the user for car1's information
    car1.InputDetails(); 
    
    // Called the method to show car1's information on the screen
    car1.DisplayDetails(); 
    
    // Returned 0 to confirm the program finished without errors
    return 0; 
}