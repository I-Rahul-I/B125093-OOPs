#include<iostream>
using namespace std;
void check(int n){
    if(n<0) cout<<n<<" is a negative number"<<endl;
    else if(n>0) cout<<n<<" is a positive number"<<endl;
    else cout<<"Given number is zero"<<endl;
}
void check(char c){
    if(c>='a' && c<='z') cout<<c<<" is a lowercase character "<<endl;
    else cout<<c<<" is a uppercase character "<<endl;
}
void check(string arr,char ch){
    for(int i=0;i<arr.length();i++){
        if(arr[i]==ch){
            cout<<"found the character "<<ch<<" in the array"<<endl;
            return;
        }
    }
    cout<<ch<<" is not present in the array"<<endl;
}
int main(){
    int num;
    cout<<"1. enter number to check : ";
    cin>>num;
    check(num);
    char c;
    cout<<"2. enter character to check uppercase and lowercase : ";
    cin>>c;
    check(c);
    char ch;
    string s;
    cout<<"3. enter string : ";
    cin>>s;
    cout<<"enter character to search in the array : ";
    cin>>ch;
    check(s,ch);
    return 0;    
}