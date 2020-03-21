#ifndef IMBALANCEDPARANTHESESEXCEPTION_HPP
#define IMBALANCEDPARANTHESESEXCEPTION_HPP

#include "BaseException.hpp"

class ImbalancedParanthesisException  : public BaseException{
    //mengirimkan pesan kesalahan jika kurang tanda kurung
    public :
        string getMessage(){
            return "Ekspresi memiliki kurung yang tidak seimbang";
        }
};

#endif // IMBALANCEDPARANTHESESEXCEPTION_HPP
