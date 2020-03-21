#include <iostream>
#include "string"
using namespace std;

class BaseExeption{
public:
	virtual string printMasage()=0;
};

class InlegalExpresionMate : public BaseExeption{
	private:
		double number1;
		double number2;
	public :
		InlegalExpresionMate(int number1, int number2){
			this -> number1 = number1;
			this -> number2 = number2;
		}
		string  printMasagae(){
		string ret = " tidak ada opertor diantara  bilangan" + to_string(number1) + "dan" + to_string(number2);
		return ret;
	}

};
class InvalidDot : public BaseExeption{
	private:
		string dot;
	public :
		InvalidDot(string dot){
			this -> dot  = dot;

		}
		string printMasage(){
		string  ret = dot + " ini kelebihan";
		return ret;
		}

};

class MorethenOneOperator : public BaseExeption{
	private:
		string opertor;
	public :
		MorethenOneOperator(string opertor){
			this -> opertor = opertor;
		} 
		string printMasage(){
			string  ret = opertor + " ini kelebihan";
			return ret;	
		}
};
class ImbalanceParenthesis  : public BaseExeption{
	private :
		string Kurung;
	public :
		ImbalanceParenthesis(string Kurung){
			this -> Kurung = Kurung;
		}
		string printMasage(){
			string  ret = Kurung + " ini tidak punya pasangan";
			return ret;
		}
};
class divideWithZero : public BaseExeption {
	public :
		string printMasage(){
			string ret = "tidak bisa membagi dengan angka 0";
			return ret;
		}
};

class NoParanthesisinSin : public BaseExeption{
	public :
		string printMasage(){
			string ret = "fungsi Sin ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisinCos : public BaseExeption{
	public :
		string printMasage(){
			string ret = "fungsi Cos ini tidak memiliki kurung";
			return ret;
		} 

};

class NoParanthesisinTan : public BaseExeption{
	public :
		string printMasage(){
			string ret = "fungsi Tan ini tidak memiliki kurung";
			return ret;
		} 

};




