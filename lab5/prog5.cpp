#include<iostream>
using  namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"value of 1st number is "<<a<<" value of 2nd number is "<<b<<endl;
}
void swap(float &a,float &b){
    float temp = a;
    a = b;
    b = temp;
    cout<<"value of 1st number is "<<a<<" value of 2nd number is "<<b<<endl;
}
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"3. value of 1st number is "<<*a<<" value of 2nd number is "<<*b<<endl;
}
int main(){
    int a,b;
    cout<<"enter two integer numbers : ";
    cin>>a>>b;
    swap(a,b);
    float c,d;
    cout<<"enter two float numbers : ";
    cin>>c>>d;
    swap(c,d);
    int e,f;
    cout<<"enter two integer numbers : ";
    cin>>e>>f;
    swap(&e,&f);
    return 0;
}