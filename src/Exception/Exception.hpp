#ifndef EXCEPTION_H
#define EXCEPTION_H

#include "BaseException.hpp"

class IllegalExpressionMate : public BaseException{
	//mengirimkan pesan kesalahan jika tidak ada operator
	private:
		double number1;
		double number2;
	public :
		IllegalExpressionMate(int number1, int number2){
			this -> number1 = number1;
			this -> number2 = number2;
		}
		string  getMessage(){
			string ret = "Tidak ada opertor diantara bilangan" + to_string(number1) + "dan" + to_string(number2);
			return ret;
		}

};

#endif
