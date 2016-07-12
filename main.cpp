#include <iostream>
using namespace std;

#include "Matrix.h"

int main() {
    Matrix<float> A(3);
    Matrix<float> B(3, 4);

    A.setValue(1, 0, 0);
    A.setValue(2, 0, 1);
    A.setValue(3, 0, 2);
    A.setValue(4, 1, 0);
    A.setValue(5, 1, 1);
    A.setValue(6, 1, 2);
    A.setValue(7, 2, 0);
    A.setValue(8, 2, 1);
    A.setValue(9, 2, 2);

    B.setValue(1, 0, 0);
    B.setValue(2, 0, 1);
    B.setValue(3, 0, 2);
    B.setValue(3, 0, 3);
    B.setValue(4, 1, 0);
    B.setValue(5, 1, 1);
    B.setValue(6, 1, 2);
    B.setValue(3, 1, 3);
    B.setValue(7, 2, 0);
    B.setValue(8, 2, 1);
    B.setValue(9, 2, 2);
    B.setValue(3, 2, 3);

    cout << "A =" << endl;
    for (int i = 0; i < A.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < A.getColumns(); j++) {
            cout << A.getValue(i, j) << " ";
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

    cout << "A.getRows() = " << A.getRows() << endl;
    cout << "A.getColumns() = " << A.getColumns() << endl;
    cout << "A.det() = " << A.det() << endl;
    cout << "A.rank() = " << A.rank() << endl;
    cout << "A.max() = " << A.max() << endl;
    cout << "A.min() = " << A.min() << endl;

    cout << endl;

    cout << "B.getRows() = " << B.getRows() << endl;
    cout << "B.getColumns() = " << B.getColumns() << endl;
    try {
        cout << "B.det() = " << B.det() << endl;
    } catch (std::logic_error& e) {
        cout << e.what() << endl;
    }
    cout << "B.rank() = " << B.rank() << endl;
    cout << "B.max() = " << B.max() << endl;
    cout << "B.min() = " << B.min() << endl;

    cout << endl;

    Matrix<float> product = A * B;
    cout << "A * B =" << endl;
    for (int i = 0; i < product.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < product.getColumns(); j++) {
            cout << product.getValue(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "A.transpose()" << endl;
    A.transpose();
    cout << "A =" << endl;
    for (int i = 0; i < A.getRows(); i++) {
        cout << "  ";
        for (int j = 0; j < A.getColumns(); j++) {
            cout << A.getValue(i, j) << " ";
        }
        cout << endl;
    }


    return 0;
}