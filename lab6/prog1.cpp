#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    int findGCD(int a, int b) {
        a = abs(a);
        b = abs(b);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void simplify() {
        if (denominator == 0) {
            return;
        }
        
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;

        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction(int num = 0, int den = 1) {
        numerator = num;
        denominator = (den == 0) ? 1 : den;
        simplify();
    }

    Fraction operator+(const Fraction& other) {
        int newNum = (this->numerator * other.denominator) + (other.numerator * this->denominator);
        int newDen = this->denominator * other.denominator;
        return Fraction(newNum, newDen);
    }

    Fraction operator-(const Fraction& other) {
        int newNum = (this->numerator * other.denominator) - (other.numerator * this->denominator);
        int newDen = this->denominator * other.denominator;
        return Fraction(newNum, newDen);
    }

    void display() const {
        if (denominator == 1) {
            cout << numerator;
        } else {
            cout << numerator << "/" << denominator;
        }
    }
};

int main() {
    int num1, den1, num2, den2;

    cout << "Enter numerator and denominator for Fraction 1: ";
    cin >> num1 >> den1;
    Fraction f1(num1, den1);

    cout << "Enter numerator and denominator for Fraction 2: ";
    cin >> num2 >> den2;
    Fraction f2(num2, den2);

    cout << "\nFraction 1: ";
    f1.display();
    cout << "\nFraction 2: ";
    f2.display();
    cout << "\n\n";

    Fraction sum = f1 + f2;
    cout << "Result of Addition (+): ";
    sum.display();
    cout << "\n";

    Fraction diff = f1 - f2;
    cout << "Result of Subtraction (-): ";
    diff.display();
    cout << "\n";

    return 0;
}
