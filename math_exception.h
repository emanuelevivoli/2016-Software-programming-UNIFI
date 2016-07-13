#ifndef MATRIXTEMPLATE_MATH_EXCEPTION_H
#define MATRIXTEMPLATE_MATH_EXCEPTION_H
#include "MatrixException.h"
#include <string>
using namespace std;
class math_exception : public MatrixException{
public:
    math_exception(string msg) : MatrixException(msg) {};
};
#endif //MATRIXTEMPLATE_MATH_EXCEPTION_H
