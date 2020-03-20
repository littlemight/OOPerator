#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

#include <iostream>
using namespace std;

class BaseException {
public:
    // menuliskan pesan kesalahan ke stdout
    virtual string getMessage() = 0;
};
#endif // BASEEXCEPTION_H
