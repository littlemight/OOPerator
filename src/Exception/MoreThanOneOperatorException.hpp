#ifndef MORETHANONEOPERATOREXCEPTION_HPP
#define MORETHANONEOPERATOREXCEPTION_HPP

#include "BaseException.hpp"

/**
 * @brief MoreThanOneOperatorException class
 * class yang berisi method dan atribut berguna untuk mengevaluasi banyak operator 
 * pada ekspresi
 **/
class MoreThanOneOperatorException : public BaseException{
    /**
	 * @brief memeriksa banyak operator pada suatu ekspresi
	 * @param opertor
	 **/
    public :
        /**
         * @brief getMessage untuk menampilkan pesan kesalahan
         * @return
         **/
        string getMessage(){
            string  ret = "Kelebihan operator pada ekspresi";
            return ret;
        }
};

#endif // MORETHANONEOPERATOREXCEPTION_HPP
