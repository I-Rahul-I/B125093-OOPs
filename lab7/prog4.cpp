#include<iostream>
using namespace std;
class LibraryAccess{
protected:
    int BooksB;
public:
    LibraryAccess(int b){
        BooksB = b;
    }
};
class LaboratoryAccess{
protected:
    int labp;
public:
    LaboratoryAccess(int l){
        labp = l;
    }
};
class StudentAccess : public LibraryAccess , public LaboratoryAccess{
public:
    StudentAccess(int b,int l) : LibraryAccess(b), LaboratoryAccess(l){}
    void Status(){
        cout<<"Student access details : "<<endl;
        cout<<"No of books borrowed : "<<BooksB<<endl;
        cout<<"No of lab submissions pending : "<<labp<<endl;
        if(BooksB<=5 && labp ==0) cout<<"Can access full resource"<<endl;
        else cout<<"Cannot access full resource"<<endl;
    }
};
int main(){
    StudentAccess s1(3,2);
    s1.Status();
return 0;
}
