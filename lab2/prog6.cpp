#include<iostream>
using namespace std;
class Time{
    int hours1,minutes1,hours2,minutes2;
    int totalhours=0;
    int totalminutes=0;
    public:
    void InputTime(){
        cout<<"enter hour for first time value : "<<endl;
        cin>>hours1;
        cout<<"enter minutes for first time value : "<<endl;
        cin>>minutes1;
        cout<<"enter hour for second time value : "<<endl;
        cin>>hours2;
        cout<<"enter minutes for second time value : "<<endl;
        cin>>minutes2;
    }
    void AddTime(){
        if(minutes1+minutes2>=60){
            totalhours=hours1+hours2+1;
            totalminutes= (minutes1+minutes2-60);
        }
        else{
            totalhours=hours1+hours2;
            totalminutes= minutes1+minutes2;
        }
    }
    void DisplayTime(){
        cout<<"the resulting time is "<<totalhours<<" hours and "<<totalminutes<<" minutes"<<endl;
    }
};
int main(){
    Time t1;
    t1.InputTime();
    t1.AddTime();
    t1.DisplayTime();
    return 0;
}