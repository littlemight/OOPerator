#ifndef MODEXCEPTION_H
#define MODEXCEPTION_H

#include "BaseException.hpp"

class ZeroModException: public BaseException {
    //mengirimkan pesan kesalahan jika modulo 0
public:
    string getMessage() {
        string ret = "Tidak bisa modulo dengan angka 0";
        return ret;
    }
};

class DecimalModException: public BaseException {
    //mengirimkan pesan kesalahan jika modulo decimal
public:
    string getMessage() {
        string ret = "Decimal pada operasi modulo tidak diperkenankan";
        return ret;
    }
};

#endif