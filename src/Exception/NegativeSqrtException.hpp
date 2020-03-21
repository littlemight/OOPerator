#ifndef NEGATIVESQRTEXCEPTION_H
#define NEGATIVESQRTEXCEPTION_H

#include "BaseException.hpp"

class NegativeSqrtException: public BaseException {
    //mengirimkan pesan kesalahan jika sqrt bernilai negatif
private:
    double number;
public:
    NegativeSqrtException(double number) {
        this->number = number;
    }
    string getMessage() {
        string ret = "Bilangan negatif " + to_string(this->number) + " tidak dapat diakarkan";
        return ret;
    }
};

#endif // NEGATIVESQRTEXCEPTION_H
