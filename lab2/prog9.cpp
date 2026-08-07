#include<iostream>
using namespace std;
class CricketPlayer{
    char Name[30];
    int MatchPlayed;
    int RunsScored;
    float Average;
    public:
    void AcceptDetails(){
        cout<<"enter player name : "<<endl;
        cin.getline(Name, 30);
        cout<<"enter matches played : "<<endl;
        cin>>MatchPlayed;
        cout<<"enter runs scored : "<<endl;
        cin>>RunsScored;
    }
    void CalcBattingAverage(){
        Average = RunsScored/MatchPlayed;
        cout<<"Batting average is "<<Average<<endl;
    }
    void Report(){
        cout<<"Name of the player is "<<Name<<endl;
        cout<<"Matches played is "<<MatchPlayed<<endl;
        cout<<"Runs scored is "<<RunsScored<<endl;
        cout<<"Batting average is "<<Average<<endl;
        if(Average<20) cout<<"Performance level : Poor"<<endl;
        else if(Average<35) cout<<"Performance level : Average"<<endl;
        else if(Average<50) cout<<"Performance level : Good"<<endl;
        else cout<<"Performance level : Excellent"<<endl;
    }
};
int main(){
    CricketPlayer c1;
    c1.AcceptDetails();
    c1.CalcBattingAverage();
    c1.Report();
    return 0;
}