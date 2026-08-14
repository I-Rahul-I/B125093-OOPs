#include<iostream>
using namespace std;
class Book{
    int book_id;
    char title[30];
    char author[30];
    float price;
    public:
    void InputDetails(){
        cout<<"enter book id :";
        cin>>book_id;
        cout<<"enter title of the book :";
        cin.ignore();
        cin.getline(title,30);
        cout<<"enter name of author :";
        cin.getline(author,30);
        cout<<"enter price of the book :";
        cin>>price;
    }
    void Display(){
        cout<<"Book id : "<<book_id<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Author : "<<author<<endl;
        cout<<"Price : "<<price<<endl;
    }
};
int main(){
    Book * b1 = new Book;
    b1->InputDetails();
    b1->Display();
    delete b1;
    b1 = nullptr;
    return 0;
}