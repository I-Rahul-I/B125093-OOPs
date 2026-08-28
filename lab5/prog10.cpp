#include<iostream>
using namespace std;
void average(int a,int b){
    cout<<"average of the two integers is : "<<(float)(a+b)/2<<endl;
}
void average(int a,int b,int c){
    cout<<"average of the three integers is : "<<(float)(a+b+c)/3<<endl;
}
void average(float a,float b){
    cout<<"average of the two floating numbers is : "<<(float)(a+b)/2<<endl;
}
void average(int* arr,int len){
    int sum = 0;
    for(int i=0;i<len;i++){
        sum+=arr[i];
    }
    cout<<"average of the two floating numbers is : "<<(float)sum/len<<endl;
}
void average(int* a,int* b){
    cout<<"average of the two integers is : "<<(float)((*a)+(*b))/2<<endl;
}
int main(){
    int a=5,b=8;
    average(a,b);
    int x=3,y=8,z=5;
    average(x,y,z);
    float c=9.87,d=3.56;
    average(c,d);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
    average(arr,length);
    int j=8,k=9;
    average(&j,&k);
    return 0;
}