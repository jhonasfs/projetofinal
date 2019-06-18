/**
* @file tratador.cpp
* @brief Arquivo de implementação da classe Tratador
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include <string>
#include "tratador.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
Tratador::Tratador(){}
Tratador::~Tratador(){}

//************************** S E T S ************************************

void Tratador::set_nivel_de_seguranca(int nivel){
    this-> nivel_de_seguranca = nivel;
}

//************************** G E T S ************************************

int Tratador::get_nivel_de_seguranca(){
    return nivel_de_seguranca;
}

//************************** O U T R A S *********************************