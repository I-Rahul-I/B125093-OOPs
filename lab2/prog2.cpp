#include<iostream>
using namespace std;

// Created a class named Square to manage square shapes and their properties
class Square{
    // Declared private floating-point variables to store the dimensions
    float side;      // Held the length of one side of the square
    float area;      // Stored the calculated surface area
    float perimeter; // Saved the calculated distance around the square
    
    public:
        // Defined a function to prompt and get the side length from the user
        void InputSide(){
            cout<<"enter length of side : "<<endl;
            cin>>side; // Read and assigned the user input to the side variable
            cout<<"side entered successfully."<<endl;
        }
        
        // Defined a function to perform the mathematical area calculation
        void CalculateArea(){
            area = side*side; // Multiplied side by itself and stored the result
            cout<<"area calculated."<<endl;
        }
        
        // Defined a function to figure out the perimeter total
        void CalculatePerimeter(){
            perimeter = 4*side; // Multiplied the side by 4 to get the perimeter
            cout<<"perimeter calculated."<<endl;
        }
        
        // Defined a function to print the final calculations to the screen
        void Display(){
            cout<<"Area of square is "<<area<<" and perimeter of the square is "<<perimeter<<endl;
        }
};

// Started the execution of the main program logic
int main(){
    // Instantiated an object named s1 from the Square class
    Square s1;
    
    // Called the method to input the side value for s1
    s1.InputSide();
    
    // Called the method to compute the area of s1
    s1.CalculateArea();
    
    // Called the method to compute the perimeter of s1
    s1.CalculatePerimeter();
    
    // Called the method to show the results on the console
    s1.Display();
    
    // Returned 0 to signal that the program completed successfully
    return 0;
}