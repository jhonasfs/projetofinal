/**
* @file veterinario.cpp
* @brief Arquivo de implementação da classe Veterinario
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include <string>
#include "./include/veterinario.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
Veterinario::Veterinario(){}
Veterinario::~Veterinario(){}

//************************** S E T S ************************************

void Veterinario::set_crmv(int crmv){
    this->crmv = crmv;
}

//************************** G E T S ************************************

int Veterinario::get_crmv(){
    return crmv;
}

//************************** O U T R A S ************************************

