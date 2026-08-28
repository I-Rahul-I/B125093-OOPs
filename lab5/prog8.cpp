#include<iostream>
using namespace std;
void update(int* num){
    int a;
    cout<<"enter amount to be increased ";
    cin>>a;
    *num = (*num) + a;
}
void update(float* num){
    float a;
    cout<<"enter amount to be increased ";
    cin>>a;
    *num = (*num) + a;
}
void update(int* arr,int n){
    int a;
    cout<<"enter amount to be increased ";
    cin>>a;
    for(int i=0;i<n;i++){
        arr[i]+=a;
    }
}
int main(){
    int n=15;
    cout<<"integer number before update : "<<n<<endl;
    update(&n);
    cout<<"integer number after update : "<<n<<endl;
    float m=5.67;
    cout<<"float number before update : "<<m<<endl;
    update(&m);
    cout<<"float number after update : "<<m<<endl;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
    cout<<"array before update : "<<endl;
    for(int i=0;i<length;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    update(arr,length);
    cout<<"array after update : "<<endl;
    for(int i=0;i<length;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}