#include<iostream>
using namespace std;
void process(int* arr,int length){
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=arr[i];
    }
    cout<<"1. sum of all elements in integer array is "<<sum<<endl;
}
void process(float* arr,int length){
    float sum=0;
    for(int i=0;i<length;i++){
        sum+=arr[i];
    }
    cout<<"2. Sum of all elements in float array is "<<sum<<endl;
}
void process(int* arr,int length,int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    cout<<"3. sum of all elements in integer array is "<<sum<<endl;
}
int main(){
    int arr1[5] = {4,7,3,2,6};
    int l1 = 5;
    process(arr1,l1);
    float arr2[5] = {5.8,2.4,8.9,6.2,2.0};
    int l2 = 5;
    process(arr2,l2);
    int arr3[10] = {5,7,6,7,3,56,8,3,2,2};
    int l3 = 10;
    int k = 4;
    process(arr3,l3,k);
    return 0;
}