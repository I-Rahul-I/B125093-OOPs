#include<iostream>
using namespace std;
class Sensor{
protected:
    int id;
public:
    Sensor(int i){
        id = i;
    }
};
class Temperature : virtual public Sensor{
protected:
    float celsius;
public:
    Temperature(int i,float c) : Sensor(i){
        celsius = c;
    }
};
class Humidity : virtual public Sensor{
protected:
    float humidity;
public:
    Humidity(int i,float h) : Sensor(i){
        humidity = h;
    }
};
class FarmMonitor : public Temperature , public Humidity{
public:
    FarmMonitor(int i,float c,float h) : Sensor(i) , Temperature(i,c) , Humidity(i,h){}
    void display(){
        cout<<"Sensor informations---"<<endl;
        cout<<"Sensor id : "<<id<<endl;
        cout<<"Temperature : "<<celsius<<endl;
        cout<<"Humidity : "<<humidity<<endl;
        if(celsius>35 || humidity>80){
            cout<<"Warning !!!"<<endl;
        }
    }
};
int main(){
    FarmMonitor f1(101,35.6,75);
    f1.display();
return 0;
}