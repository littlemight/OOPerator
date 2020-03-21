#ifndef DIVIDEWITHZEROEXCEPTION_HPP
#define DIVIDEWITHZEROEXCEPTION_HPP

#include "BaseException.hpp"

class DivideWithZeroException : public BaseException {
    //mengirimkan pesan kesalahan jika dibagi dengan 0
    public :
        string getMessage(){
            string ret = "Tidak bisa membagi dengan angka 0";
            return ret;
        }
};
#endif // DIVIDEWITHZEROEXCEPTION_HPP
