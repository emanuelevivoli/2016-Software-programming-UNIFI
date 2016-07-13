#ifndef MATRIXTEMPLATE_MATRIXEXCEPTION_H
#define MATRIXTEMPLATE_MATRIXEXCEPTION_H
#include <stdexcept>
#include <string>
using namespace std;
class MatrixException : public exception{
public:
    explicit MatrixException(const string& msg=""): _msg(msg){};
    virtual ~MatrixException() noexcept {}

    virtual const char *what() const noexcept override {
        return _msg.c_str();
    };

private:
    string _msg;
};


#endif //MATRIXTEMPLATE_MATRIXEXCEPTION_H
