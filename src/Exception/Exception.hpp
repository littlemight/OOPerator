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

class InvalidDot : public BaseException{
	//mengirimkan pesan kesalahan jika "." tidak sesuai
	private:
		string dot;
	public :
		InvalidDot(string dot){
			this -> dot  = dot;

		}
		string getMessage(){
			string  ret = dot + " ini kelebihan";
			return ret;
		}

};

class MoreThanOneOperator : public BaseException{
	//mengirimkan pesan kesalahan jika operator lebih dari satu
	private:
		string opertor;
	public :
		MoreThanOneOperator(string opertor){
			this -> opertor = opertor;
		} 
		string getMessage(){
			string  ret = opertor + " ini kelebihan";
			return ret;	
		}
};

class ImbalanceParenthesis  : public BaseException{
	//mengirimkan pesan kesalahan jika kurang tanda kurung
	private :
		string Kurung;
	public :
		ImbalanceParenthesis(string Kurung){
			this -> Kurung = Kurung;
		}
		string getMessage(){
			string  ret = Kurung + " ini tidak punya pasangan";
			return ret;
		}
};
class DivideWithZero : public BaseException {
	//mengirimkan pesan kesalahan jika dibagi dengan 0
	public :
		string getMessage(){
			string ret = "Tidak bisa membagi dengan angka 0";
			return ret;
		}
};

class NoParanthesisInSin : public BaseException{
	//mengirimkan pesan kesalahan jika sin tidak dilengkapi kurung
	public :
		string getMessage(){
			string ret = "Fungsi Sin ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisInCos : public BaseException{
	//mengirimkan pesan kesalahan jika cos tidak dilengkapi kurung
	public :
		string getMessage(){
			string ret = "Fungsi Cos ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisInTan : public BaseException{
	//mengirimkan pesan kesalahan jika cos tidak dilengkapi kurung
	public :
		string getMessage(){
			string ret = "Fungsi Tan ini tidak memiliki kurung";
			return ret;
		} 
};

#endif
