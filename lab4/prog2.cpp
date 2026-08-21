#include<iostream>
#include<string.h>
using namespace std;
class UserAccount{
    char Username[30];
    int attempts;
    char status[30];
public:
    UserAccount(char* name){
        strcpy(Username,name);
        attempts=0;
    }
    void login(){
        cout<<"unsuccessfull login"<<endl;
        attempts++;
    }
    friend void checkAccount(UserAccount);
};
void checkAccount(UserAccount u){
    if(u.attempts<=3){
        strcpy(u.status,"Account Active");
    }
    else strcpy(u.status,"Account Locked");
    cout<<"Username : "<<u.Username<<" no of login attempts "<<u.attempts<<" status : "<<u.status<<endl;
}

int main(){
    char name[30] = "RAhul_op";
    UserAccount u1(name);
    u1.login();
    checkAccount(u1);
    u1.login();
    checkAccount(u1);
    u1.login();
    checkAccount(u1);
    u1.login();
    checkAccount(u1);
    return 0;
}