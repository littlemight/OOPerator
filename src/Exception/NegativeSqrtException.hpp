#ifndef NEGATIVESQRTEXCEPTION_H
#define NEGATIVESQRTEXCEPTION_H

#include "BaseException.hpp"

/**
 * @brief NegativeSqrtException class
 * class yang berisi method dan atribut berguna untuk mengevaluasi nilai sqrt 
 * pada ekspresi
 **/
class NegativeSqrtException: public BaseException {
private:
    double number;
public:
    /**
	 * @brief memeriksa nilai sqrt pada suatu ekspresi
	 * @param number
	 **/
    NegativeSqrtException(double number) {
        this->number = number;
    }
    /**
	 * @brief getMessage untuk menampilkan pesan kesalahan
     * @return
	 **/
    string getMessage() {
        string ret = "Bilangan negatif " + to_string(this->number) + " tidak dapat diakarkan";
        return ret;
    }
};

#endif // NEGATIVESQRTEXCEPTION_H
