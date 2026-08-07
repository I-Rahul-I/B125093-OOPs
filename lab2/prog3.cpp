#include<iostream>
using namespace std;

class Temperature{
    float Celsius,Fahrenheit;
    public:
    void InputTemperature(){
        cout<<"enter temperature in celsius : "<<endl;
        cin>>Celsius;
    }
    void ConvertFahrenheit(){
        Fahrenheit = (9*Celsius/5)+32;
    }
    void Display(){
        cout<<"The temperature in Celsius is "<<Celsius<<endl;
        cout<<"The temperature in Fahrenheit is "<<Fahrenheit<<endl;
    }
};
int main(){
    Temperature t1;
    t1.InputTemperature();
    t1.ConvertFahrenheit();
    t1.Display();
    return 0;
}