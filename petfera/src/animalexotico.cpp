/**
* @file animalexotico.cpp
* @brief Arquivo de implementação da classe AnimalExotico
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "../include/animalexotico.h"
#include <string>

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
AnimalExotico::AnimalExotico(string pais_origem, string autorizacao_ibama) : AnimalSilvestre(autorizacao_ibama){
    set_pais_origem(pais_origem);
}
AnimalExotico::~AnimalExotico(){}

//************************** S E T S ************************************

void AnimalExotico::set_pais_origem(string pais){
    this->pais_origem = pais;
}

//************************** G E T S ************************************

string AnimalExotico::get_pais_origem(){
    return pais_origem;
}

//************************** O U T R A S ************************************