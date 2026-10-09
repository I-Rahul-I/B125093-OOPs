#include <iostream>
using namespace std;
class Matrix {
private:
    int mat[2][2];
public:
    Matrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                mat[i][j] = 0;
            }
        }
    }

    Matrix(int values[2][2]) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                mat[i][j] = values[i][j];
            }
        }
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.mat[i][j] = this->mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << "\n";
        }
    }
};

int main() {
    int val1[2][2] = {
        {1, 2},
        {3, 4}
    };
    int val2[2][2] = {
        {5, 6},
        {7, 8}
    };
    Matrix m1(val1);
    Matrix m2(val2);
    Matrix m3 = m1 + m2;
    cout << "Matrix 1:\n";
    m1.display();
    cout << "\nMatrix 2:\n";
    m2.display();
    cout << "\nResultant Matrix (Matrix 1 + Matrix 2):\n";
    m3.display();
    return 0;
}