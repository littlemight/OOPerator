#ifndef UNDEFINEDOPERATOREXCEPTION_HPP
#define UNDEFINEDOPERATOREXCEPTION_HPP

#include "BaseException.hpp"

class UndefinedOperatorException : public BaseException{
    //mengirimkan pesan kesalahan jika operator lebih dari satu
    private:
        string opertor;
    public :
        UndefinedOperatorException(string opertor){
            this -> opertor = opertor;
        }
        string getMessage(){
            string  ret = this->opertor + " merupakan operator yang tidak terdefinisi";
            return ret;
        }
};

#endif // UNDEFINEDOPERATOREXCEPTION_HPP
