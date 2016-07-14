#include <iostream>
using namespace std;

#include "Matrix.h"

int main() {
    Matrix<float> C(3, 3, {1, 3, 5, 7, 8, 9, 11, 2, 14});
    Matrix<float> B(3, 4, {1, 2, 3, 3, 4, 5, 6, 3, 7, 8, 9, 3});

    cout << "C =" << endl;
    for (int i = 0; i < C.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < C.getColumns(); j++) {
            cout << C.getValue(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "B =" << endl;
    for (int i = 0; i < B.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < B.getColumns(); j++) {
            cout << B.getValue(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "C.getRows() = " << C.getRows() << endl;
    cout << "C.getColumns() = " << C.getColumns() << endl;
    cout << "C.det() = " << C.det() << endl;
    cout << "C.rank() = " << C.rank() << endl;
    cout << "C.max() = " << C.max() << endl;
    cout << "C.min() = " << C.min() << endl;

    cout << endl;

    cout << "B.getRows() = " << B.getRows() << endl;
    cout << "B.getColumns() = " << B.getColumns() << endl;
    try {
        cout << "B.det() = " << B.det() << endl;
    } catch (math_exception& e) {
        cout << e.what() << endl;
    }
    cout << "B.rank() = " << B.rank() << endl;
    cout << "B.max() = " << B.max() << endl;
    cout << "B.min() = " << B.min() << endl;

    cout << endl;

    Matrix<float> product = C * B;
    cout << "C * B =" << endl;
    for (int i = 0; i < product.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < product.getColumns(); j++) {
            cout << product.getValue(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "C.transpose()" << endl;
    C.transpose();
    cout << "C =" << endl;
    for (int i = 0; i < C.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < C.getColumns(); j++) {
            cout << C.getValue(i, j) << " ";
        }
        cout << endl;
    }

    Matrix<float> d = B.diag();
    cout << "diag(B) =" << endl;
    for (int i = 0; i < d.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < d.getColumns(); j++) {
            cout << d.getValue(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}