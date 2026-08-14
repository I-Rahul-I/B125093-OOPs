#include<iostream>
using namespace std;

int main(){
    int length;
    cout<<"enter length of the array : "<<endl;
    cin>>length;
    int* arr = new int[length];
    for(int i=0;i<length;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>*(arr+i);
    }
    int odd_count=0,even_count=0;
    cout<<"displaying the array : "<<endl;
    for(int j=0;j<length;j++){
        cout<<arr[j]<<"\t";
        if(arr[j]%2==0) even_count++;
        else odd_count++;
    }
    cout<<"\n";
    cout<<"total even numbers in the array : "<<even_count<<endl;
    cout<<"total odd numbers in the array : "<<odd_count<<endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}
