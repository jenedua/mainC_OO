#include <cstdlib>
#include <string>
#include <iostream>

#include "Carro.h"
#include "Carro.cpp"
using namespace std;


int main(int argc, char** argv){

    Carro c1;
    c1.setMarca("Corsa GM");
    c1.setAno(2012);

    Carro c2("BMW",2020);
    //c2.setMarca("Fiat");
    c2.setAno(2018);

    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;
    cout << c1.pneus << endl;
    
    c1.pneus =2;

    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
    cout << c2.pneus << endl;
    cout << c1.pneus << endl;

    return 0;

}