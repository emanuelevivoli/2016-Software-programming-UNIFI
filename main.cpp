#include <iostream>
using namespace std;

#include "Matrix.h"

int main() {
    Matrix<float> m(3, 4);
    cout << "Rows: " <<  m.getRows() << " Columns: " << m.getColumns();

    return 0;
}