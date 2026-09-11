#include<iostream>
using namespace std;
class QueueDisplay{
    int size;
    int* arr = new int[size];
public:
    void insertid(){
        int n;
        cout<<"enter size : ";
        cin>>n;
        this->size = n;
        for(int i=0;i<n;i++){
            cout<<"enter id : ";
            cin>>(*(arr+i));
        }
    }
    void displayid(){
        int n= this->size; 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }
    void release(){
        delete[] arr;
        arr = nullptr;
    }
    friend void exchange(QueueDisplay&,QueueDisplay&);
};

void exchange(QueueDisplay& a,QueueDisplay& b){
    int k = a.size;
    a.size = b.size;
    b.size = k;
    int* p = (a.arr);
    (a.arr) = (b.arr);
    (b.arr) = p;
}

int main(){
    QueueDisplay* arr = new QueueDisplay[2];
    (*(arr)).insertid();
    (*(arr+1)).insertid();
    cout<<"displaying first object : "<<endl;
    (*(arr)).displayid();
    cout<<"displaying second object : "<<endl;
    (*(arr+1)).displayid();

    exchange(*(arr),*(arr+1));
    
    cout<<"displaying first object after exchange : "<<endl;
    (*(arr)).displayid();
    cout<<"displaying second object after exchange : "<<endl;
    (*(arr+1)).displayid();


    (*(arr)).release();
    (*(arr+1)).release();
    delete[] arr;
    arr = nullptr;
}