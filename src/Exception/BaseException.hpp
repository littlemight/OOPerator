#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

#include <iostream>
using namespace std;

/**
 * @brief Class virtual yang menjadi boilerplate untuk exception-exception lainnya yang akan digunakan
 */
class BaseException {
public:
    virtual string getMessage() = 0;
};
#endif // BASEEXCEPTION_H
