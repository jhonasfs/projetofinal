/**
* @file veterinario.cpp
* @brief Arquivo de implementação da classe Veterinario
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include <string>
#include "../include/veterinario.h"

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
Veterinario::Veterinario(){}
Veterinario::Veterinario(string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade, string crmv) : Funcionario(nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade){
    set_crmv(crmv);
}
Veterinario::~Veterinario(){}

//************************** S E T S ************************************

void Veterinario::set_crmv(std::string crmv){
    this->crmv = crmv;
}

//************************** G E T S ************************************

std::string Veterinario::get_crmv(){
    return crmv;
}

//************************** O U T R A S ************************************

