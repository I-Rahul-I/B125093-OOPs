#include<iostream>
using namespace std;
class Product{
    int product_id;
    char name[30];
    public:
    float price;
    int quantity;
    void InputDetails(){
        cout<<"enter product id : ";
        cin>>product_id;
        cout<<"enter product name : ";
        cin.ignore();
        cin>>name;
        cout<<"price of the product : ";
        cin>>price;
        cout<<"enter quantity : ";
        cin>>quantity;
    }
    void Display(){
        cout<<product_id<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t"<<price*quantity<<endl;
    }
};
int main(){
    int length;
    cout<<"enter no of products : ";
    cin>>length;
    Product* arr = new Product[length];
    cout<<"enter details for "<<length<<" products one by one ."<<endl;
    for(int i=0;i<length;i++){
        cout<<"enter details of product "<<i+1<<" : "<<endl;
        (arr+i)->InputDetails();
    }
    long long total_cost = 0;
    cout<<"id"<<"\t"<<"name"<<"\t"<<"price"<<"\t"<<"qty"<<"\t"<<"cost"<<endl;
    for(int j=0;j<length;j++){
        total_cost+= (arr+j)->price * (arr+j)->quantity;
        (arr+j)->Display();
    }
    cout<<"total cost at inventory "<<total_cost<<endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}