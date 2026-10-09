#include<iostream>
using namespace std;
class Date{
    int day,month,year;
public:
    Date(int d,int m,int y){
        day = d;
        month = m;
        year = y;
    }
    bool operator==(Date d){
        return day==d.day && month==d.month && year==d.year;
    }
    bool operator!=(Date d){
        return !(*this==d);
    }
};
int main(){
    Date d1(29,01,2008);
    Date d2(12,02,2006);
    Date d3(29,01,2008);
    cout<<boolalpha;  //For true or false output otherwise it will show 0 or 1
    cout<<(d1==d2)<<endl;
    cout<<(d1==d3)<<endl;
return 0;
}