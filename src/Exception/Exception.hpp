#ifndef EXCEPTION_H
#define EXCEPTION_H

#include "BaseException.hpp"

class IllegalExpressionMate : public BaseException{
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
	public :
		string getMessage(){
			string ret = "Tidak bisa membagi dengan angka 0";
			return ret;
		}
};

class NoParanthesisInSin : public BaseException{
	public :
		string getMessage(){
			string ret = "Fungsi Sin ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisInCos : public BaseException{
	public :
		string getMessage(){
			string ret = "Fungsi Cos ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisInTan : public BaseException{
	public :
		string getMessage(){
			string ret = "Fungsi Tan ini tidak memiliki kurung";
			return ret;
		} 
};

#endif
