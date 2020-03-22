#ifndef NOPARANTHESISINUNARYEXCEPTION_HPP
#define NOPARANTHESISINUNARYEXCEPTION_HPP

#include "BaseException.hpp"

/**
 * @brief NoParanthesisInUnaryException class
 * class yang berisi method berguna untuk mengevaluasi fungsi sin 
 * pada ekspresi
 **/
class NoParanthesisInUnaryException: public BaseException {
    //mengirimkan pesan kesalahan jika operator unary tidak dilengkapi kurung
    private:
        string opr;
    public:
        /**
         * @brief konstruktor yang menyimpan operator unarynya
         * @param opr String dari operator unary
         **/
        NoParanthesisInUnaryException(string opr) {
            this->opr = opr;
        }
        
        /**
         * @brief getMessage untuk menampilkan pesan kesalahan
         * @return
         **/
        string getMessage() {
            string ret = "Operator " + opr + " tidak memiliki kurung";
            return ret;
        }
};

#endif // NOPARANTHESISINUNARY_HPP
