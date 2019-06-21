/**
* @file ave.cpp
* @brief Arquivo de implementação da classe Ave
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "../include/ave.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
Ave::Ave(){}
Ave::~Ave(){}

//************************** S E T S ************************************
void Ave::set_tamanho_do_bico_cm(double tamanho){
    this->tamanho_do_bico_cm = tamanho;
}

void Ave::set_envergadora_das_asas(double envergadora){
    this->envergadora_das_asas = envergadora;
}

//************************** G E T S ************************************
double Ave::get_tamanho_do_bico_cm(){
    return tamanho_do_bico_cm;
}

double Ave::get_envergadora_das_asas(){
    return envergadora_das_asas;
}

//************************** O U T R A S ************************************