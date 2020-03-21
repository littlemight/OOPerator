#ifndef MODEXCEPTION_H
#define MODEXCEPTION_H

#include "BaseException.hpp"

class ModException: public BaseException {
public:
    string getMessage() {
        string ret = "Tidak bisa modulo dengan angka 0";
        return ret;
    }
};

#endif