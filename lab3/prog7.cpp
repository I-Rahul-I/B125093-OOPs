#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"enter length of the string : ";
    cin>>length;
    char* s = new char[length];
    cout<<"enter the string : ";
    cin.ignore();
    cin.getline(s,length);
    
    int vowel_count=0,consonant_count=0,digits_count=0,spaces_count=0;
    for(int i=0;i<length;i++){
        if(s[i]==' ') spaces_count++;
        else if(s[i]>='0' && s[i]<='9') digits_count++;
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') vowel_count++;
        else consonant_count++;
    }
    cout<<"no of vowels "<<vowel_count<<endl;
    cout<<"no of consonant "<<consonant_count<<endl;
    cout<<"no of digits "<<digits_count<<endl;
    cout<<"no of spaces "<<spaces_count<<endl;
    delete[] s;
    s=nullptr;
    return 0;
}