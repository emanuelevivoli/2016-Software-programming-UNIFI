#ifndef MATRIXTEMPLATE_INDEX_EXCEPTION_H
#define MATRIXTEMPLATE_INDEX_EXCEPTION_H
#include "MatrixException.h"
#include <string>
using namespace std;
class index_exception : public MatrixException{
public:
    index_exception(string msg) : MatrixException(msg) {};
};
#endif //MATRIXTEMPLATE_INDEX_EXCEPTION_H
