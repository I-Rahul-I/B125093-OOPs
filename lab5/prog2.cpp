#include<iostream>
using namespace std;
void area(int side){
    cout<<"area of the square is : "<<side*side<<endl;
}
void area(int l,int b){
    cout<<"area of the rectangle is : "<<l*b<<endl;
}
void area(float r){
    cout<<"area of circle is : "<<3.14*r*r<<endl;
}
int main(){
    int side;
    cout<<"enter side of square : ";
    cin>>side;
    area(side);
    int l,b;
    cout<<"enter length of the rectangle : ";
    cin>>l;
    cout<<"enter breadth of the rectangle : ";
    cin>>b;
    area(l,b);
    float radius;
    cout<<"enter radius of the circle : ";
    cin>>radius;
    area(radius);
    return 0;
}