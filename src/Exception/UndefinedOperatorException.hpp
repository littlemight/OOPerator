#ifndef UNDEFINEDOPERATOREXCEPTION_HPP
#define UNDEFINEDOPERATOREXCEPTION_HPP

#include "BaseException.hpp"

/**
 * @brief UndefinedOperatorException class
 * class yang berisi method dan atribut berguna untuk mengevaluasi operator tidak terdefinisi 
 * pada ekspresi
 **/
class UndefinedOperatorException : public BaseException{
    private:
        string opertor;
    public :
    /**
	 * @brief memeriksa operator pada suatu ekspresi
	 * @param opertor
	 **/
        UndefinedOperatorException(string opertor){
            this -> opertor = opertor;
        }
    /**
	 * @brief getMessage untuk menampilkan pesan kesalahan
     * @return
	 **/
        string getMessage(){
            string  ret = this->opertor + " merupakan operator yang tidak terdefinisi";
            return ret;
        }
};

#endif // UNDEFINEDOPERATOREXCEPTION_HPP
