#include <iostream>
#include <string>

using namespace std;

class Duration {
private:
    int hours;
    int minutes;

    void normalize() {
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

public:
    Duration(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
        normalize();
    }

    Duration operator+(const Duration& other) {
        int totalHours = this->hours + other.hours;
        int totalMinutes = this->minutes + other.minutes;
        
        return Duration(totalHours, totalMinutes);
    }

    void display() const {
        cout << hours << " hrs " << minutes << " mins";
    }
};

int main() {
    int h1, m1, h2, m2;

    cout << "Enter hours and minutes for Duration 1: ";
    cin >> h1 >> m1;
    Duration d1(h1, m1);

    cout << "Enter hours and minutes for Duration 2: ";
    cin >> h2 >> m2;
    Duration d2(h2, m2);

    Duration result = d1 + d2;

    cout << "\nOriginal Duration 1: ";
    d1.display();
    cout << "\nOriginal Duration 2: ";
    d2.display();
    
    cout << "\n\nResulting Duration (+): ";
    result.display();
    cout << "\n";

    return 0;
}
