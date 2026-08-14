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
    int search_element,idx=-1;
    cout<<"enter the element to be searched :";
    cin>>search_element;
    cout<<"displaying the array : "<<endl;
    for(int j=0;j<length;j++){
        cout<<arr[j]<<"\t";
        if(arr[j]==search_element) idx=j;
    }
    cout<<"\n";
    if(idx==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element "<<search_element<<" found at index "<<idx<<endl;
    }

    delete[] arr;
    arr = nullptr;
    return 0;
}