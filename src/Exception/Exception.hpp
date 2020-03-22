#ifndef EXCEPTION_H
#define EXCEPTION_H

#include "BaseException.hpp"

/**
 * @brief IllegalExpressionMate class
 * class yang berisi method dan atribut berguna untuk mengevaluasi kesalahan letak operator
 **/
class IllegalExpressionMate : public BaseException{
	private:
		double number1;
		double number2;
	public :
	/**
	 * @brief memeriksa apakah sudah ada operator antara dua ekspresi
	 * @param number1
	 * @param number2 
	 **/
		IllegalExpressionMate(int number1, int number2){
			this -> number1 = number1;
			this -> number2 = number2;
		}
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string  getMessage(){
			string ret = "Tidak ada opertor diantara bilangan" + to_string(number1) + "dan" + to_string(number2);
			return ret;
		}

};

#endif
