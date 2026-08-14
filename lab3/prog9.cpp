#include<iostream>
using namespace std;
class Employee{
    int id;
    char name[30];
    float salary;
    public:
    void Accept(){
        cout<<"enter id : ";
        cin>>id;
        cout<<"enter name : ";
        cin.ignore();
        cin.getline(name,30);
        cout<<"enter salary : ";
        cin>>salary;
    }
    void Display(){
        cout<<"id "<<id<<" name "<<name<<" salary "<<salary<<endl;
    }
    int  getSalary(){
        return salary;
    }
};
int main(){
    int length;
    cout<<"enter length of the array : ";
    cin>>length;
    Employee* arr = new Employee[length];
    for(int i=0;i<length;i++){
        cout<<"enter details of "<<i+1<<" employee :"<<endl;
        (arr+i)->Accept();
    }
    for(int j=0;j<length;j++){
        (arr+j)->Display();
    }
    int maxidx = 0;
    for(int k=1;k<length;k++){
        int curr_salary = (arr+k)->getSalary();
        int max_salary = (arr+maxidx)->getSalary();
        if(curr_salary>max_salary) maxidx = k;
    }
    cout<<"displaying details of employee having high salary "<<endl;
    (arr+maxidx)->Display();

    int sum=0;
    for(int l=0;l<length;l++){
        sum += (arr+l)->getSalary();
    }
    cout<<"Average salary is "<<(float)sum/length;
    delete[] arr;
    arr = nullptr;
    return 0;
}