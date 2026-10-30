#include<iostream>
using namespace std;
class BackupPolicy{
public:
    virtual double calculateStorage(double datasize){}
    virtual ~BackupPolicy(){}
};
class FullBackup : public BackupPolicy{
public:
    double calculateStorage(double datasize) {
        return datasize;
    }
};
class IncrementalBackup : public BackupPolicy{
public:
    double calculateStorage(double datasize) {
        return (0.25*datasize) + 50.0;
    }
};
int main(){
    FullBackup f1;
    IncrementalBackup i1;

    BackupPolicy* b1;
    b1 = &f1;
    cout<<"Storage is : "<<b1->calculateStorage(300)<<endl;
    
    b1 = &i1;
    cout<<"Storage is : "<<b1->calculateStorage(300)<<endl;
return 0;
}