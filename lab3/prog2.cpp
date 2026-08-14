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

    cout<<"displaying the array in reverse order : "<<endl;
    for(int j=length-1;j>=0;j--){
        cout<<arr[j]<<"\t";
    }
    cout<<"\n";
    delete[] arr;
    arr = nullptr;
    return 0;
}