/**
* @file mamifero.cpp
* @brief Arquivo de implementação da classe Mamifero
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "../include/mamifero.h"
#include <string>

//*********************** CONSTRUTOR/DESTRUTOR **************************
Mamifero::Mamifero(){}
Mamifero::~Mamifero(){}

//************************** S E T S ************************************
void Mamifero::set_cor_pelo(std::string cor){
    this->cor_pelo = cor;
}

//************************** G E T S ************************************

std::string Mamifero::get_cor_pelo(){
    return cor_pelo;
}

//************************** O U T R A S ***********************************
