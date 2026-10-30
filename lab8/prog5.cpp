#include<iostream>
using namespace std;
class Scholarship{
public:
    virtual double calculateAward(double marks,double familyincome){}
    virtual ~Scholarship(){}
};
class MeritScholarship : public Scholarship{
    double calculateAward(double marks, double familyincome){
        if(marks >= 90.0){
            return 20000.00;
        }
        else if(marks>=80){
            return 10000.00;
        }
        else{
            return 0;
        }
    }
};
class NeedBasedScholarship : public Scholarship{
public:
    double calculateAward(double marks,double familyincome) {
        if(familyincome<200000.9 && marks >=70.0){
            return 25000;
        }
        else return 0.0;
    }
};
int main(){
    MeritScholarship m1;
    NeedBasedScholarship n1;

    Scholarship* s1;

    s1 = &m1;
    cout<<"Merit scholarship : "<<s1->calculateAward(80,160000)<<endl;
    s1 = &n1;
    cout<<"Need scholarship : "<<s1->calculateAward(80,160000)<<endl;
return 0;
}