#include<iostream>
using namespace std;
class Wallet{
    int id;
    float currbalance;
    float* transactionamount = new float[5];
public:
    void AcceptDetails(){
        cout<<"enter id ";
        cin>>this->id;
        cout<<"enter current balance ";
        cin>>this->currbalance;
        for(int i=0;i<5;i++){
            cout<<"enter amount "<<i+1<<" : ";
            cin>>this->transactionamount[i];
        }
    }
    void transaction(float k){
        if(k>0){
            cout<<"amount added "<<endl;
            this->currbalance = this->currbalance + k;
        }
        else{
            cout<<"amount withdrawn "<<endl;
            this->currbalance = this->currbalance - k;
        }
    }
    void transaction(float k,char c){
        if(c=='D'){
            cout<<"amount added "<<endl;
            this->currbalance = this->currbalance + k;
        }
        else{
            cout<<"amount withdrawn "<<endl;
            this->currbalance = this->currbalance - k;
        }
    }
    void release(){
        delete[] transactionamount;
        transactionamount = nullptr;
    }
    friend void compareBalance(Wallet,Wallet);
};

void compareBalance(Wallet a,Wallet b){
    if(a.currbalance>=b.currbalance){
        cout<<"wallet with id "<<a.id<<" has larger balance"<<endl;
    }
    else{
        cout<<"wallet with id "<<b.id<<" has larger balance"<<endl;
    }
}

int main(){
    Wallet* a = new Wallet;
    a->AcceptDetails();
    Wallet* b = new Wallet;
    b->AcceptDetails();

    a->transaction(299);
    b->transaction(500,'W');
    compareBalance(*a,*b);

    a->release();
    b->release();
    delete a;
    a=nullptr;
    delete b;
    b=nullptr;
return 0;
}