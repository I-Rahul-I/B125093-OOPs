#include<iostream>
using namespace std;

// Created a class named CricketPlayer to store athlete statistics and grade performance
class CricketPlayer{
    // Declared private data fields to hold player metrics
    char Name[30];     // Formed a character array for storing the athlete's name
    int MatchPlayed;   // Saved the total count of matches the athlete participated in
    int RunsScored;    // Held the cumulative aggregate runs secured over their career
    float Average;     // Kept track of the calculated seasonal batting performance ratio
    
    public:
    // Defined a method to ingest telemetry data profiles from user entry pipelines
    void AcceptDetails(){
        cout<<"enter player name : "<<endl;
        cin.getline(Name, 30); // Read the complete string identifying the player including spaces
        
        cout<<"enter matches played : "<<endl;
        cin>>MatchPlayed; // Logged the quantitative total of historical career appearances
        
        cout<<"enter runs scored : "<<endl;
        cin>>RunsScored; // Captured the raw number data representing total runs hit
    }
    
    // Defined a computational routine to process metrics and determine averages
    void CalcBattingAverage(){
        Average = RunsScored/MatchPlayed; // Calculated batting efficiency ratio by dividing statistics
        cout<<"Batting average is "<<Average<<endl;
    }
    
    // Defined a logic evaluation system to output profiles and rank tier standing scores
    void Report(){
        cout<<"Name of the player is "<<Name<<endl;
        cout<<"Matches played is "<<MatchPlayed<<endl;
        cout<<"Runs scored is "<<RunsScored<<endl;
        cout<<"Batting average is "<<Average<<endl;
        
        // Structured comparative decision trees to gauge performance thresholds
        if(Average<20) cout<<"Performance level : Poor"<<endl; // Tagged lower bracket tiers
        else if(Average<35) cout<<"Performance level : Average"<<endl; // Isolated standard mid-tier skills
        else if(Average<50) cout<<"Performance level : Good"<<endl; // Distinguished reliable upper tier assets
        else cout<<"Performance level : Excellent"<<endl; // Commended top-performing elite benchmark metrics
    }
};

// Initiated structural control loop sequence within standard main program block
int main(){
    // Instantiated an individual tracking account entry node named c1
    CricketPlayer c1;
    
    // Dispatched interface capture commands to fill out initial player data fields
    c1.AcceptDetails();
    
    // Triggered the algorithm evaluating quantitative run logs against match appearance counts
    c1.CalcBattingAverage();
    
    // Activated multi-level conditional diagnostic logic to print full grade breakdowns
    c1.Report();
    
    // Returned control execution token index 0 denoting clean system operations
    return 0;
}