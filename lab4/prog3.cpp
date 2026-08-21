#include<iostream>
#include<string.h>
using namespace std;
class Camera{
    string brand;
    int model;
    int megapixels;
    int storage;
public:
    Camera(string b,int m,int mp,int s){
        brand = b;
        model = m;
        megapixels = mp;
        storage = s;
    }
    friend void Compare(Camera,Camera);
};
void Compare(Camera c1,Camera c2){
    if(c1.megapixels>c2.megapixels){
        cout<<"brand : "<<c1.brand<<" model "<<c1.model<<" megapixels "<<c1.megapixels<<" storage "<<c1.storage<<endl;
    }
    else if(c2.megapixels>c1.megapixels){
        cout<<"brand : "<<c2.brand<<" model "<<c2.model<<" megapixels "<<c2.megapixels<<" storage "<<c2.storage<<endl;
    }
    else{
        if(c1.storage>=c2.storage){
            cout<<"brand : "<<c1.brand<<" model "<<c1.model<<" megapixels "<<c1.megapixels<<" storage "<<c1.storage<<endl;
        }
        else{
            cout<<"brand : "<<c2.brand<<" model "<<c2.model<<" megapixels "<<c2.megapixels<<" storage "<<c2.storage<<endl;
        }
    }

}

int main(){
    Camera c1("dslr",40,48,256);
    Camera c2("rocket",38,46,128);
    Compare(c1,c2);
    return 0;
}