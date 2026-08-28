#include<iostream>
using namespace std;
void information(char* s){
    int length=0;
    for(int i=0;s[i]!='\0';i++){
        length++;
    }
    cout<<"length of the character array is "<<length<<endl;
}
void information(char* s,char c){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c) {
            count++;
        }
    }
    cout<<c<<" found in the array "<<count<<" times"<<endl;
}
void information(char* s,char c,int k){
    int count=0;
    for(int i=0;i<k;i++){
        if(s[i]==c) {
            count++;
        }
    }
    cout<<c<<" found in the array "<<count<<" times"<<endl;
}
int main(){
    char s1[] = "Rahulop";
    information(s1);
    char s2[] = "wowowoow";
    char c = 'o';
    information(s2,c);
    char s3[] = "wohoooo";
    char ch = 'o';
    int k=5;
    information(s3,ch,k);
    return 0;
}