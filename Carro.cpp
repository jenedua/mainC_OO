#include "Carro.h"

#include<string>
#include <iostream>
using namespace std;

void Carro::setMarca(string marca){
    this->marca = marca;
}
string Carro::getMarca(){
    return this->marca;
}
void Carro::setAno(int ano){
    if(ano > 1990)
        this->ano = ano;
    else
        this->ano = 1990;
}
int Carro::getAno(){
    return this->ano;
}
Carro::Carro(){
    this->marca= "celta";
}
Carro::Carro(string marca, int ano){
    this->marca= marca;
    this->ano =ano;
}
Carro::~Carro(){
    cout << "O carro foi destruido" << endl;
}
int Carro::pneus = 4;