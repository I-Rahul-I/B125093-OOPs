#include<iostream>
using namespace std;
void convert(long long* kilometers){
    *kilometers = (*kilometers) * 1000;
    cout<<"1. kilometers into meters : "<<*kilometers<<endl;
}
void convert(int* meters){
    *meters = (*meters) * 100;
    cout<<"2. meters into centimeters : "<<*meters<<endl;
}

void convert(float* kilometers){
    *kilometers = (*kilometers) * 1000;
    cout<<"3. kilometers into meters using float : "<<*kilometers<<endl;
}
int main(){
    long long km1;
    int m;
    float km2;
    cout<<"enter distance in kilometers to meters : ";
    cin>>km1;
    convert(&km1);
    cout<<"enter distance in meters to centimeters : ";
    cin>>m;
    convert(&m);
    cout<<"enter distance in kilometers to meters : ";
    cin>>km2;
    convert(&km2);
    return 0;
}