#include<iostream>
using namespace std;
class Score{
private:
    int score;
public:
    Score(int s=0){
        score = s;
    }
    Score& operator++(){
        ++score;
        return *this;
    }
    Score operator++(int){
        Score temp = *this;
        score++;
        return temp;
    }
    void display(){
        cout<<"Score : "<<score<<endl;
    }
};
int main(){
    Score s1(10);
    s1.display();
    Score s2 = ++s1;
    s2.display();
    Score s3 = s1++;
    s3.display();
    return 0;
}