#ifndef DIVIDEWITHZEROEXCEPTION_HPP
#define DIVIDEWITHZEROEXCEPTION_HPP

#include "BaseException.hpp"

/**
 * @brief Class yang berisi method berguna untuk mengevaluasi pembagian 0
 * pada ekspresi
 **/
class DivideWithZeroException : public BaseException {
    public :
        /**
         * @brief getMessage untuk menampilkan pesan kesalahan
         * @return
         **/
        string getMessage(){
            string ret = "Tidak bisa membagi dengan angka 0";
            return ret;
        }
};
#endif // DIVIDEWITHZEROEXCEPTION_HPP
