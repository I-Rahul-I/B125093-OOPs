#include<iostream>
using namespace std;
class Temperature{
    double celsius;
public:
    Temperature(double c){
        celsius = c;
    }
    bool operator>(Temperature t){
        return celsius>t.celsius;
    }
    bool operator<(Temperature t){
        return celsius<t.celsius;
    }
    Temperature operator-(){
        return Temperature(-celsius);
    }
    void display(){
        cout<<"Temperature is : "<<celsius<<endl;
    }
};
int main(){
    Temperature t1(35),t2(25);
    Temperature t3 = -t1;
    t3.display();
    cout<<boolalpha;
    cout<<(t1>t2)<<endl;
    cout<<(t1<t2)<<endl;
    return 0;
}