#include<iostream>
using namespace std;
class Document{
public:
    virtual void exportFile(){
        cout<<"Exporting normal document"<<endl;
    }
    virtual ~Document(){}
};
class PdfDocument : public Document{
public:
    void exportFile(){
        cout<<"Exporting document in pdf format"<<endl;
    }
};
class TxtDocument : public Document{
public:
    void exportFile(){
        cout<<"Exporting document in text format"<<endl;
    }
};
class CsvDocument : public Document{
public:
    void exportFile(){
        cout<<"Exporting document in csv format"<<endl;
    }
};
int main(){
    PdfDocument p1;
    TxtDocument t1;
    CsvDocument c1;
    Document* d;
    d = &p1;
    d->exportFile();
    d=&t1;
    d->exportFile();
    d=&c1;
    d->exportFile();
return 0;
}