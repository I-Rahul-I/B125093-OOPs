#include<iostream>
using namespace std;
class Candidate{
protected:
    int id;
    float percentage;
public:
    Candidate(int i,float p){
        id = i;
        percentage = p;
    }
};
class RegularCandidate : public Candidate{
public:
    RegularCandidate(int i,float p) : Candidate(i,p){}
    void Eligibility(){
        if(percentage>=75){
            cout<<"Candidate eligible ."<<endl;
        }
        else{
            cout<<"Candidate not eligible ."<<endl;
        }
    }
};
class ReappearCandidate : public Candidate{
public:
    ReappearCandidate(int i,float p) : Candidate(i,p){}
    void Eligibility(){
        if(percentage>=60){
            cout<<"Candidate eligible to reappear."<<endl;
        }
        else{
            cout<<"Candidate not eligible to reappear."<<endl;
        }
    }
};
int main(){
    RegularCandidate r1(101,78);
    r1.Eligibility();
    ReappearCandidate r2(102,44);
    r2.Eligibility();
return 0;
}