#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <QMainWindow>
#include <QQueue>
#include <queue>
#include "../Parser/Parser.hpp"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

/**
 * @brief The Calculator class bertanggung jawab terhadap segala interaksi dalam suatu kalkulator
 * Menggunakan QMainWindow sebagai GUI dari Calculator
 */
class Calculator : public QMainWindow
{
    Q_OBJECT
private:
    double ans;
    string tokens;
    Ui::Calculator *ui;
    queue<double> memo;
public:
    /**
     * @brief Konstruktor yang menginisiasi atribut-atribut kalkulator,
     * melakukan binding dari class ke fungsi2, dll
     */
    Calculator(QWidget *parent = nullptr);
    /**
     * @brief ~Calculator sebuah destructor untuk Calculator
     */
    ~Calculator();

// The corresponding buttons must be linked to these "slots" functions
// Creating a "Button" class and making a virtual onclick function proved to be cumbersome,
// since linking it to these "slots" function is a difficult task done from inside a class
// The linking of the actual button will be done in the Calculator constructor:
// notice that Calculator has attribute "ui", "ui" has the attribute "QPushButton" which we will use to connect these functions
private slots:
    /**
     * @brief digClicked menambahkan digit angka ke dalam layar ketika tombol ditekan
     */
    void digClicked();
    /**
     * @brief oprClicked menambahkan operator binary ke dalam layar ketika tombol ditekan
     */
    void oprClicked();
    /**
     * @brief unaryOprClicked menambahkan operator unary ke dalam layar ketika tombol ditekan
     */
    void unaryOprClicked();
    /**
     * @brief eqClicked melakukan evaluasi ekspresi pada layar ketika tombol ditekan
     */
    void eqClicked();
    /**
     * @brief acClicked membersihkan layar dan clear memory ketika tombol ditekan
     */
    void acClicked();
    /**
     * @brief clrscrClicked membersihkan layar ketika tombol ditekan
     */
    void clrscrClicked();
    /**
     * @brief decClicked menambahkan dot penanda desimal ke dalam layar ketika tombol ditekan
     */
    void decClicked();
    /**
     * @brief ansClicked menambahkan hasil perhitungan terakhir ke layar ketika tombol ditekan
     */
    void ansClicked();
    /**
     * @brief mcClicked melakukan push hasil perhitungan dengan prinsip FIFO ketika tombol ditekan
     */
    void mcClicked();
    /**
     * @brief mrClicked melakukan pop hasil perhitungan yang sudah disimpan dengan prinsip FIFO ditekan
     */
    void mrClicked();
    /**
     * @brief delClicked menghapus character terakhir dari layar, kondisi tidak boleh kosong ditekan
     */
    void delClicked();
};
#endif // CALCULATOR_H
