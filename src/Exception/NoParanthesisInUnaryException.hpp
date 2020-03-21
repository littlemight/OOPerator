#ifndef NOPARANTHESISINUNARYEXCEPTION_HPP
#define NOPARANTHESISINUNARYEXCEPTION_HPP

#include "BaseException.hpp"

class NoParanthesisInUnaryException: public BaseException {
    //mengirimkan pesan kesalahan jika operator unary tidak dilengkapi kurung
    private:
        string opr;
    public:
        NoParanthesisInUnaryException(string opr) {
            this->opr = opr;
        }

        string getMessage() {
            string ret = "Operator " + opr + " tidak memiliki kurung";
            return ret;
        }
};

#endif // NOPARANTHESISINUNARY_HPP
