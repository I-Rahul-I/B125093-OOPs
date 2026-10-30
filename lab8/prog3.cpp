#include<iostream>
using namespace std;
class TrafficSignal {
public:
    virtual int getGreenDuration(int vehicleCount){}
    virtual ~TrafficSignal(){}
};
class UrbanSignal : public TrafficSignal{
public:
    int getGreenDuration(int v) {
        int duration = 10 + (2*v);
        if(duration>60) duration = 60;
        return duration;
    }
};
class HighwaySignal : public TrafficSignal{
public:
    int getGreenDuration(int v) {
        int duration = 15 + (3*v);
        if(duration>90) duration = 90;
        return duration;
    }
};
int main(){
    UrbanSignal u1;
    HighwaySignal h1;
    TrafficSignal* t1;

    t1 = &u1;
    cout<<"Urban signal green duration : "<<t1->getGreenDuration(50)<<endl;
    t1 = &h1;
    cout<<"Highway signal green duration : "<<t1->getGreenDuration(50)<<endl;
return 0;
}