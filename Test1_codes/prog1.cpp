#include<iostream>

using namespace std;
class Locker{
    int number;
    string status;
    char* ACarray = new char[10];
public:
    void AcceptDetails(){
        int n;
        cout<<"enter locker number : ";
        cin>>n;
        (*this).number = n;
        cout<<"enter status : ";
        cin>>(*this).status;

    }
    void setCode(){
        cout<<"enter your password : "<<endl;
        cin>>ACarray;
    }
    void setCode(int k){
        cout<<"enter new code : ";
        char p;
        cin>>p;
        ACarray[k] = p;

        cout<<"your password is : "<<endl;
        for(int j=0;j<10;j++){
            cout<<*(ACarray+j)<<"\t";
        }
        cout<<endl;
    }
    void deleteACarray(){
        delete[] ACarray;
        ACarray = nullptr;
    }
};

int main(){
    int n;
    cout<<"enter number of lockers : ";
    cin>>n;
    Locker* arr = new Locker[n];
    for(int i=0;i<n;i++){
        cout<<"enter details of "<<i+1<<" locker : "<<endl;
        (*(arr+i)).AcceptDetails();
        (*(arr+i)).setCode();
    }
    int k;
    cout<<"enter the position you want to change : ";
    cin>>k;
    (*(arr+1)).setCode(k);

    for(int i=0;i<n;i++){
        (*(arr+i)).deleteACarray();
    }
    delete[] arr;
    arr = nullptr;
return 0;
}