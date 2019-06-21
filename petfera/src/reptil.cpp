/**
* @file reptil.cpp
* @brief Arquivo de implementação da classe Reptil
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "../include/reptil.h"
#include <string>

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
Reptil::Reptil(){}
Reptil::~Reptil(){}

//************************** S E T S ************************************
void Reptil::set_venenoso(bool venenoso){
    this->venenoso = venenoso;
}

void Reptil::set_tipo_veneno(string tipo){
    this->tipo_veneno = tipo;
}

//************************** G E T S ************************************
bool Reptil::get_venenoso(){
    return venenoso;
}

string Reptil::get_tipo_veneno(){
    return tipo_veneno;
}

//************************** O U T R A S ************************************