#include<iostream>
using namespace std;
class Square{
    float side;
    float area;
    float perimeter;
    public:
        void InputSide(){
            cout<<"enter length of side : "<<endl;
            cin>>side;
            cout<<"side entered successfully."<<endl;
        }
        void CalculateArea(){
            area = side*side;
            cout<<"area calculated."<<endl;
        }
        void CalculatePerimeter(){
            perimeter = 4*side;
            cout<<"perimeter calculated."<<endl;
        }
        void Display(){
            cout<<"Area of square is "<<area<<" and perimeter of the square is "<<perimeter<<endl;
        }
};
int main(){
    Square s1;
    s1.InputSide();
    s1.CalculateArea();
    s1.CalculatePerimeter();
    s1.Display();
    return 0;
}