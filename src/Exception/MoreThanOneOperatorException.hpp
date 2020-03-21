#ifndef MORETHANONEOPERATOREXCEPTION_HPP
#define MORETHANONEOPERATOREXCEPTION_HPP

#include "BaseException.hpp"

class MoreThanOneOperatorException : public BaseException{
    //mengirimkan pesan kesalahan jika operator lebih dari satu
    public :
        string getMessage(){
            string  ret = "Kelebihan operator pada ekspresi";
            return ret;
        }
};

#endif // MORETHANONEOPERATOREXCEPTION_HPP
