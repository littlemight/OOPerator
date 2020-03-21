#ifndef MODEXCEPTION_H
#define MODEXCEPTION_H

#include "BaseException.hpp"

/**
 * @brief ZeroModException class
 * class yang berisi method berguna untuk mengevaluasi modulo dibagi 0
 * pada ekspresi
 **/
class ZeroModException: public BaseException {    
public:
    /**
	 * @brief getMessage untuk menampilkan pesan kesalahan
     * @return
	 **/
    string getMessage() {
        string ret = "Tidak bisa modulo dengan angka 0";
        return ret;
    }
};

/**
 * @brief DecimalModException class
 * class yang berisi method berguna untuk mengevaluasi modulo decimal 
 * pada ekspresi
 **/
class DecimalModException: public BaseException {
public:
    /**
	 * @brief getMessage untuk menampilkan pesan kesalahan
     * @return
	 **/
    string getMessage() {
        string ret = "Decimal pada operasi modulo tidak diperkenankan";
        return ret;
    }
};

#endif