#ifndef INVALIDDECIMALEXCEPTION_H
#define INVALIDDECIMALEXCEPTION_H

#include "BaseException.hpp"

class InvalidDecimalException : public BaseException {
    //mengirimkan pesan kesalahan jika "." tidak sesuai
    private:
        string strNum;
    public :
        InvalidDecimalException(string strNum){
            this -> strNum = strNum;

        }
        string getMessage(){
            string ret = strNum + " memiliki titik desimal yang tidak valid";
            return ret;
        }

};

#endif // INVALIDDECIMALEXCEPTION_H
