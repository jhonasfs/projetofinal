/**
* @file animalsilvestre.cpp
* @brief Arquivo de implementação da classe AnimalSilvestre
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include <string>
#include "../include/animalsilvestre.h"

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
AnimalSilvestre::AnimalSilvestre(){}
AnimalSilvestre::AnimalSilvestre(string autorizacao_ibama){
    set_autorizacao_ibama(autorizacao_ibama);
}
AnimalSilvestre::~AnimalSilvestre(){}

//************************** S E T S ************************************

void AnimalSilvestre::set_autorizacao_ibama(string autorizacao){
    this->autorizacao_ibama = autorizacao;
}

//************************** G E T S ************************************

string AnimalSilvestre::get_autorizacao_ibama(){
    return autorizacao_ibama;
}

//************************** O U T R A S ************************************
