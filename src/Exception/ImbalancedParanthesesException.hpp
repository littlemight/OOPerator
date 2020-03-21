#ifndef IMBALANCEDPARANTHESESEXCEPTION_HPP
#define IMBALANCEDPARANTHESESEXCEPTION_HPP

#include "BaseException.hpp"

/**
 * @brief ImbalanceParenthesisException class
 * class yang berisi method dan atribut berguna untuk mengevaluasi banyak kurung 
 * pada ekspresi
 **/
class ImbalancedParanthesisException  : public BaseException{
    public :
    	/**
         * @brief memeriksa banyak kurung pada suatu ekspresi
         **/
        string getMessage(){
            return "Ekspresi memiliki kurung yang tidak seimbang";
        }
};

#endif // IMBALANCEDPARANTHESESEXCEPTION_HPP
