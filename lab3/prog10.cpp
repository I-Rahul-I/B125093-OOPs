#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter m : ";
    cin>>m;
    cout<<"enter n : ";
    cin>>n;

    cout<<"Matrix 1: "<<endl;
    int** m1  = new int*[m];
    for(int i=0;i<m;i++){
        m1[i] = new int[n];
        for(int j=0;j<n;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>m1[i][j];
        }
    }
    cout<<"Matrix 2: "<<endl;
    int** m2  = new int*[m];
    for(int i=0;i<m;i++){
        m2[i] = new int[n];
        for(int j=0;j<n;j++){
            cout<<"enter element "<<i<<","<<j<<" : ";
            cin>>m2[i][j];
        }
    }
    
    cout<<"Added Matrix: "<<endl;
    int** ans  = new int*[m];
    for(int i=0;i<m;i++){
        ans[i] = new int[n];
        for(int j=0;j<n;j++){
            ans[i][j] = m1[i][j] + m2[i][j];
            cout<<"element "<<i<<","<<j<<" : "<<ans[i][j]<<"\t";
        }
        cout<<"\n";
    }

    for(int i=0;i<m;i++){
        delete[] m1[i];
        delete[] m2[i];
        delete[] ans[i];
        m1[i] = nullptr;
        m2[i] = nullptr;
        ans[i] = nullptr;
    }
    
    delete[] m1;
    delete[] m2;
    delete[] ans;
    m1 = nullptr;
    m2 = nullptr;
    ans = nullptr;
    return 0;
}