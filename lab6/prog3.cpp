#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    double price;

public:
    Book(string t = "", double p = 0.0) {
        title = t;
        price = p;
    }

    bool operator<(const Book& other) const {
        if (this->price != other.price) {
            return this->price < other.price;
        }
        return this->title < other.title;
    }

    void display() const {
        cout << "\"" << title << "\" | Price: $" << price;
    }
};

int main() {
    string t1, t2;
    double p1, p2;

    cout << "Enter title for Book 1: ";
    getline(cin, t1);
    cout << "Enter price for Book 1: ";
    cin >> p1;
    cin.ignore();

    cout << "Enter title for Book 2: ";
    getline(cin, t2);
    cout << "Enter price for Book 2: ";
    cin >> p2;
    cin.ignore();

    Book b1(t1, p1);
    Book b2(t2, p2);

    cout << "\n--- Comparing Books ---\n";
    b1.display();
    cout << "\n";
    b2.display();
    cout << "\n\n";

    if (b1 < b2) {
        cout << "Result: Book 1 is smaller than Book 2.\n";
    } else {
        cout << "Result: Book 1 is NOT smaller than Book 2.\n";
    }

    return 0;
}
