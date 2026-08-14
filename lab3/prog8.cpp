#include<iostream>
using namespace std;

void AcceptElements(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<" : "<<endl;
        cin>>*(arr+i);
    }
}

int Sumelements(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+= arr[i];
return sum;
}

int smallest_element(int* arr,int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min) min =arr[i];
    }
    return min;
}

int largest_element(int* arr,int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max) max =arr[i];
    }
    return max;
}


void Display_result(int sum,int small,int large){
    cout<<"Sum of all elements is : "<<sum<<endl;
    cout<<"Smallest element is : "<<small<<endl;
    cout<<"Largest element is : "<<large<<endl;
}

int main(){
    int length;
    cout<<"enter length of the array";
    cin>>length;
    int* arr = new int[length];
    AcceptElements(arr,length);
    int sum = Sumelements(arr,length);
    int small = smallest_element(arr,length);
    int large = largest_element(arr,length);

    Display_result(sum,small,large);
    delete[] arr;
    arr=nullptr;
return 0;
}