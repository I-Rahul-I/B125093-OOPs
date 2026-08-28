#include<iostream>
using namespace std;
void inspect(int a){
    cout<<"value at this variable is "<<a<<endl;
}
void inspect(int* a){
    cout<<"value at this integer pointer is "<<*a<<endl;
}
void inspect(int* arr,int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int a=6;
    inspect(a);
    int b=7;
    inspect(&b);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int len = 10;
    inspect(arr,len);
    return 0;
}