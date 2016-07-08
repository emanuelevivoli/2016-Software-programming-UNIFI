//
// Created by emanuele.vivoli on 7/8/16.
//

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
    Matrix(unsigned int rows,unsigned int columns);
    Matrix(unsigned int dim);
    Matrix(const Matrix& M);
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
    Matrix<T>& diag(unsigned int diag=0) const;

    void setValue(const T& value, unsigned int row, unsigned int column);
    T& getValue(unsigned int row, unsigned int column) const;

    Matrix<T>& operator+(const T& lhs, const T& rhs) const;
    Matrix<T>& operator-(const T& lhs, const T& rhs) const;
    Matrix<T>& operator*(const T& lhs, const T& rhs) const;
    Matrix<T>& operator/(const T& lhs, const T& rhs) const;
    Matrix<T>& operator^(const T& lhs, int pow) const;

    Matrix<T>& operator+=(const T& rhs);
    Matrix<T>& operator-=(const T& rhs);
    Matrix<T>& operator*=(const T& rhs);
    Matrix<T>& operator/=(const T& rhs);
    Matrix<T>& operator^=(const T& lhs, int pow) const;

    bool operator==(const T& lhs, const T& rhs) const;
    bool operator!=(const T& lhs, const T& rhs) const;
    bool operator<(const T& lhs, const T& rhs) const;
    bool operator>(const T& lhs, const T& rhs) const;

};



Matrix::Matrix(unsigned int rows,unsigned int columns):rows(rows),columns(columns){

}

Matrix::Matrix(unsigned int dim): rows(dim),columns(dim){

}

Matrix::Matrix(const Matrix& M) {

}

Matrix::~Matrix() {

}

template <typename T>
T &Matrix::max() const {
    return <#initializer#>;
}

template <typename T>
T &Matrix::min() const {
    return <#initializer#>;
}

template <typename T>
T &Matrix::det() const {
    return <#initializer#>;
}

template <typename T>
T &Matrix::transpose() {
    return <#initializer#>;
}

unsigned int Matrix::rank() const {
    return 0;
}




unsigned int Matrix::getRows() const {
    return 0;
}

unsigned int Matrix::getColumns() const {
    return 0;
}

std::pair<unsigned int, unsigned int> Matrix::size() const {
    return std::pair<unsigned int, unsigned int>();
}




template <typename T>
Matrix<T> &Matrix::Row(unsigned int row) const {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::Column(unsigned int column) const {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::diag(unsigned int diag) const {
    return <#initializer#>;
}

template <typename T>
void Matrix::setValue(const T &value, unsigned int row, unsigned int column) {

}

template <typename T>
T &Matrix::getValue(unsigned int row, unsigned int column) const {
    return <#initializer#>;
}


//ARITHMETIC OPERATORS

template <typename T>
Matrix<T> &Matrix::operator+(const T &lhs, const T &rhs) const {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator-(const T &lhs, const T &rhs) const {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator*(const T &lhs, const T &rhs) const {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator/(const T &lhs, const T &rhs) const {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator^(const T &lhs, int pow) const {
    return <#initializer#>;
}


//BYNARY OPERATOR

template <typename T>
Matrix<T> &Matrix::operator+=(const T &rhs) {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator-=(const T &rhs) {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator*=(const T &rhs) {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator/=(const T &rhs) {
    return <#initializer#>;
}

template <typename T>
Matrix<T> &Matrix::operator^=(const T &lhs, int pow) const {
    return <#initializer#>;
}


//LOGICAL OPERATORS


template <typename T>
bool Matrix::operator==(const T &lhs, const T &rhs) const {
    return false;
}

template <typename T>
bool Matrix::operator!=(const T &lhs, const T &rhs) const {
    return false;
}

template <typename T>
bool Matrix::operator<(const T &lhs, const T &rhs) const {
    return false;
}

template <typename T>
bool Matrix::operator>(const T &lhs, const T &rhs) const {
    return false;
}




#endif //MATRIXTEMPLATE_MATRIX_H



