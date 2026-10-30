#include<iostream>
using namespace std;
class Image{
protected:
    int width;
    int height;
public:
    Image(int w,int h){
        width = w;
        height = h;
    }
};
class CompressedImage : public Image{
protected:
    float ratio;
public:
    CompressedImage(int w,int h,float r) : Image(w,h){
        ratio = r;
    }
};
class EncryptedImage : public CompressedImage{
protected:
    string name;
public:
    EncryptedImage(int w,int h,float r,string n) : CompressedImage(w,h,r){
        name = n;
    }
    void display(){
        int OrgPixels = width * height;
        float effectivesize = OrgPixels * ratio / 100;
        cout<<"Image width : "<<width<<endl;
        cout<<"Image height : "<<height<<endl;
        cout<<"Original Pixels : "<<OrgPixels<<endl;
        cout<<"Effective Size : "<<effectivesize<<endl;
        cout<<"Algorithm name : "<<name<<endl;
    }
};
int main(){
    EncryptedImage e1(19,10,98.9,"Rahul");
    e1.display();
return 0;
}
