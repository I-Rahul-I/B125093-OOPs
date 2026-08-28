#include<iostream>
#include<math.h>
using namespace std;
int nearValue(int a,int b){
    return abs(a)>=abs(b) ? b : a;
}
float nearValue(float a,float b){
    return abs(a)>=abs(b) ? b : a; 
}
int nearValue(int* arr,int length){
    int min = 0;
    for(int i=0;i<length;i++){
        if(abs(arr[i])<abs(arr[min])){
            min = i;
        }
    }
    return arr[min];
}   
int main(){
    int a=-3,b=5;
    cout<<"1. Near to zero is : "<<nearValue(a,b)<<endl;
    float c=-2.16,d=1.50;
    cout<<"2. Near to zero is : "<<nearValue(c,d)<<endl;
    int arr[10] = {-8,4,7,6,8,5,9,-2,10,11};
    int length = 10;
    cout<<"3. near to zero is : "<<nearValue(arr,length)<<endl;
    return 0;
}