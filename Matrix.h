#ifndef MATRIXTEMPLATE_MATRIX_H
#define MATRIXTEMPLATE_MATRIX_H

#include <utility>

template <typename T>
class Matrix {
private:
    unsigned int rows;
    unsigned int columns;
    T *ptr;

public:
    Matrix(unsigned int rows, unsigned int columns);
    Matrix(unsigned int dim);
    Matrix(const Matrix<T>& M);
    virtual ~Matrix();

    T& max() const;
    T& min() const;
    T& det() const;
    T& transpose();
    unsigned int rank() const;
    unsigned int getRows() const;
    unsigned int getColumns() const;
    std::pair<unsigned int, unsigned int> size() const;
    Matrix<T>& Row(unsigned int row) const;
    Matrix<T>& Column(unsigned int column) const;
    Matrix<T>& diag(unsigned int diag = 0) const;

    void setValue(const T& value, unsigned int row, unsigned int column);
    T& getValue(unsigned int row, unsigned int column) const;

    Matrix<T>& operator+(const Matrix<T>& rhs) const;
    Matrix<T>& operator-(const Matrix<T>& rhs) const;
    Matrix<T>& operator*(const Matrix<T>& rhs) const;
    Matrix<T>& operator/(const Matrix<T>& rhs) const;
    Matrix<T>& operator^(int pow) const;

    Matrix<T>& operator+=(const Matrix<T>& rhs);
    Matrix<T>& operator-=(const Matrix<T>& rhs);
    Matrix<T>& operator*=(const Matrix<T>& rhs);
    Matrix<T>& operator/=(const Matrix<T>& rhs);
    Matrix<T>& operator^=(int pow) const;

    bool operator==(const Matrix<T>& rhs) const;
    bool operator!=(const Matrix<T>& rhs) const;
    bool operator<(const Matrix<T>& rhs) const;
    bool operator>(const Matrix<T>& rhs) const;

};


template <typename T>
Matrix<T>::Matrix(unsigned int rows, unsigned int columns) : rows(rows), columns(columns) {
    ptr = new T[rows * columns];

    for (int i = 0; i < rows * columns; i++)
        ptr[i] = 0;
}

template <typename T>
Matrix<T>::Matrix(unsigned int dim): rows(dim), columns(dim) {
    ptr = new T[rows * columns];

    for (int i = 0; i < rows * columns; i++)
        ptr[i] = 0;
}

template <typename T>
Matrix<T>::Matrix(const Matrix<T>& M) {
    rows = M.rows;
    columns = M.columns;
    ptr = new T[rows * columns];

    for (int i = 0; i < rows * columns; i++)
        ptr[i] = M.ptr[i];
}

template <typename T>
Matrix<T>::~Matrix() {
    delete[] ptr;
}

template <typename T>
T &Matrix<T>::max() const {
    // TODO
    return T();
}

template <typename T>
T &Matrix<T>::min() const {
    // TODO
    return T();
}

template <typename T>
T &Matrix<T>::det() const {
    // TODO
    return T();
}

template <typename T>
T &Matrix<T>::transpose() {
    // TODO
    return T();
}

template <typename T>
unsigned int Matrix<T>::rank() const {
    // TODO
    return 0;
}



template <typename T>
unsigned int Matrix<T>::getRows() const {
    return rows;
}

template <typename T>
unsigned int Matrix<T>::getColumns() const {
    return columns;
}

template <typename T>
std::pair<unsigned int, unsigned int> Matrix<T>::size() const {
    return std::pair<unsigned int, unsigned int>(rows, columns);
}




template <typename T>
Matrix<T> &Matrix<T>::Row(unsigned int row) const {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::Column(unsigned int column) const {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::diag(unsigned int diag) const {
    // TODO
    return T();
}

template <typename T>
void Matrix<T>::setValue(const T &value, unsigned int row, unsigned int column) {
    // TODO
}

template <typename T>
T &Matrix<T>::getValue(unsigned int row, unsigned int column) const {
    return T();
}


//ARITHMETIC OPERATORS

template <typename T>
Matrix<T> &Matrix<T>::operator+(const Matrix<T> &rhs) const {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator-(const Matrix<T> &rhs) const {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator*(const Matrix<T> &rhs) const {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator/(const Matrix<T> &rhs) const {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator^(int pow) const {
    // TODO
    return T();
}


//BYNARY OPERATOR

template <typename T>
Matrix<T> &Matrix<T>::operator+=(const Matrix<T> &rhs) {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator-=(const Matrix<T> &rhs) {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator*=(const Matrix<T> &rhs) {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator/=(const Matrix<T> &rhs) {
    // TODO
    return T();
}

template <typename T>
Matrix<T> &Matrix<T>::operator^=(int pow) const {
    // TODO
    return T();
}


//LOGICAL OPERATORS


template <typename T>
bool Matrix<T>::operator==(const Matrix<T> &rhs) const {
    if (this->rows != rhs.rows || this->columns != rhs.columns)
        return false;
    for (int i = 0; i < rows * columns; i++)
        if (this->ptr[i] != rhs.ptr[i])
            return false;
    return true;
}

template <typename T>
bool Matrix<T>::operator!=(const Matrix<T> &rhs) const {
    // TODO
    return false;
}

template <typename T>
bool Matrix<T>::operator<(const Matrix<T> &rhs) const {
    // TODO
    return false;
}

template <typename T>
bool Matrix<T>::operator>(const Matrix<T> &rhs) const {
    // TODO
    return false;
}




#endif //MATRIXTEMPLATE_MATRIX_H



