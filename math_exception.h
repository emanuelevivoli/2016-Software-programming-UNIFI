#ifndef MATRIXTEMPLATE_MATH_EXCEPTION_H
#define MATRIXTEMPLATE_MATH_EXCEPTION_H

#include "MatrixException.h"
#include <string>

class math_exception : public MatrixException {
public:
    math_exception(const std::string& msg="") : MatrixException(msg) {};
};

#endif //MATRIXTEMPLATE_MATH_EXCEPTION_H
