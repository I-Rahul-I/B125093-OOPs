#include<iostream>
#include<string.h>
using namespace std;
class Weather{
    char city[30];
    float temperature;
    char condition[30];
public:
    Weather(char* c,float t){
        strcpy(city,c);
        temperature = t;
    }
    friend void generateReport(Weather);
};
void generateReport(Weather w1){
    if(w1.temperature>35){
            strcpy(w1.condition,"Very Hot");
        }
    else if(w1.temperature>=20 && w1.temperature<=35) strcpy(w1.condition,"Pleasant");
    else strcpy(w1.condition,"Cool");
    cout<<"City "<<w1.city<<" has temperature "<<w1.temperature<<" the climate is "<<w1.condition<<endl;
}

int main(){
    char city[30] = "Durgapur";
    Weather w1(city,26);
    generateReport(w1);
    return 0;
}
