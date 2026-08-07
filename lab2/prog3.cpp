#include<iostream>
using namespace std;

// Created a class named Temperature to handle weather unit conversions
class Temperature{
    // Declared private floating-point variables to store the degree values
    float Celsius, Fahrenheit;
    
    public:
    // Defined a function to capture the base temperature from the user
    void InputTemperature(){
        cout<<"enter temperature in celsius : "<<endl;
        cin>>Celsius; // Read and assigned the user input into the Celsius variable
    }
    
    // Defined a function to apply the conversion formula
    void ConvertFahrenheit(){
        Fahrenheit = (9*Celsius/5)+32; // Used the standard formula to compute Fahrenheit
    }
    
    // Defined a function to print both values out to the console
    void Display(){
        cout<<"The temperature in Celsius is "<<Celsius<<endl;
        cout<<"The temperature in Fahrenheit is "<<Fahrenheit<<endl;
    }
};

// Started the execution of the main program logic
int main(){
    // Instantiated an object named t1 from the Temperature class
    Temperature t1;
    
    // Called the method to collect the initial Celsius value for t1
    t1.InputTemperature();
    
    // Called the method to trigger the formula evaluation
    t1.ConvertFahrenheit();
    
    // Called the method to print out the final calculated metrics
    t1.Display();
    
    // Returned 0 to ensure the operating system knew the program exited cleanly
    return 0;
}