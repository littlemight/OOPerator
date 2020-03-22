#ifndef INVALIDDECIMALEXCEPTION_H
#define INVALIDDECIMALEXCEPTION_H

#include "BaseException.hpp"

/**
 * @brief Class yang berisi method dan atribut berguna untuk memberitahu bahwa sebuah string memiliki decimal yang salah
 * pada ekspresi
 **/
class InvalidDecimalException : public BaseException {
    //mengirimkan pesan kesalahan jika "." tidak sesuai
    private:
        string strNum;
    public :
        /**
         * @brief memeriksa letak dot pada ekspresi
         * @param strNum String angka yang memiliki titik decimal tidak valid
         **/
        InvalidDecimalException(string strNum){
            this -> strNum = strNum;

        }

        /**
         * @brief getMessage untuk menampilkan pesan kesalahan
         * @return
         **/
        string getMessage(){
            string ret = strNum + " memiliki titik desimal yang tidak valid";
            return ret;
        }

};

#endif // INVALIDDECIMALEXCEPTION_H
