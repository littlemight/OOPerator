#include "BaseException.hpp"
#include <iostream>
using namespace std;

class InlegalExpresionMate : public BaseException{
	private:
		double number1;
		double number2;
	public :
		InlegalExpresionMate(int number1, int number2){
			this -> number1 = number1;
			this -> number2 = number2;
		}
		string  getMessage(){
		string ret = " tidak ada opertor diantara  bilangan" + to_string(number1) + "dan" + to_string(number2);
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

class MorethenOneOperator : public BaseException{
	private:
		string opertor;
	public :
		MorethenOneOperator(string opertor){
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
class divideWithZero : public BaseException {
	public :
		string getMessage(){
			string ret = "tidak bisa membagi dengan angka 0";
			return ret;
		}
};

class NoParanthesisinSin : public BaseException{
	public :
		string getMessage(){
			string ret = "fungsi Sin ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisinCos : public BaseException{
	public :
		string getMessage(){
			string ret = "fungsi Cos ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisinTan : public BaseException{
	public :
		string getMessage(){
			string ret = "fungsi Tan ini tidak memiliki kurung";
			return ret;
		} 

};
