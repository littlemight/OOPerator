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

/**
 * @brief InvalidDot class
 * class yang berisi method dan atribut berguna untuk mengevaluasi dot atau "."  
 * pada ekspresi
 **/
class InvalidDot : public BaseException{
	private:
		string dot;
	public :
	/**
	 * @brief memeriksa letak dot pada ekspresi
	 * @param dot
	 **/
		InvalidDot(string dot){
			this -> dot  = dot;

		}
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string getMessage(){
			string  ret = dot + " ini kelebihan";
			return ret;
		}

};

/**
 * @brief MoreThanOneOperator class
 * class yang berisi method dan atribut berguna untuk mengevaluasi banyak operator 
 * pada ekspresi
 **/
class MoreThanOneOperator : public BaseException{
	private:
		string opertor;
	public :
	/**
	 * @brief memeriksa banyak operator pada suatu ekspresi
	 * @param opertor
	 **/
		MoreThanOneOperator(string opertor){
			this -> opertor = opertor;
		}
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string getMessage(){
			string  ret = opertor + " ini kelebihan";
			return ret;	
		}
};

/**
 * @brief ImbalanceParenthesis class
 * class yang berisi method dan atribut berguna untuk mengevaluasi banyak kurung 
 * pada ekspresi
 **/
class ImbalanceParenthesis  : public BaseException{
	private :
		string Kurung;
	public :
	/**
	 * @brief memeriksa banyak kurung pada suatu ekspresi
	 * @param kurung
	 **/
		ImbalanceParenthesis(string Kurung){
			this -> Kurung = Kurung;
		}
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string getMessage(){
			string  ret = Kurung + " ini tidak punya pasangan";
			return ret;
		}
};

/**
 * @brief DivideWithZero class
 * class yang berisi method berguna untuk mengevaluasi pembagian 0 
 * pada ekspresi
 **/
class DivideWithZero : public BaseException {
	public :
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string getMessage(){
			string ret = "Tidak bisa membagi dengan angka 0";
			return ret;
		}
};

/**
 * @brief NoParanthesisInSin class
 * class yang berisi method berguna untuk mengevaluasi fungsi sin 
 * pada ekspresi
 **/
class NoParanthesisInSin : public BaseException{
	public :
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string getMessage(){
			string ret = "Fungsi Sin ini tidak memiliki kurung";
			return ret;
		} 

};

/**
 * @brief NoParanthesisInCos class
 * class yang berisi method berguna untuk mengevaluasi fungsi cos
 * pada ekspresi
 **/
class NoParanthesisInCos : public BaseException{
	public :
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string getMessage(){
			string ret = "Fungsi Cos ini tidak memiliki kurung";
			return ret;
		} 

};

/**
 * @brief NoParanthesisInTan class
 * class yang berisi method berguna untuk mengevaluasi fungsi tan 
 * pada ekspresi
 **/
class NoParanthesisInTan : public BaseException{
	public :
	/**
	 * @brief getMessage untuk menampilkan pesan kesalahan
	 * @return
	 **/
		string getMessage(){
			string ret = "Fungsi Tan ini tidak memiliki kurung";
			return ret;
		} 
};

#endif
