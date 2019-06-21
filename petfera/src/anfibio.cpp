/**
* @file anfibio.cpp
* @brief Arquivo de implementação da classe Anfibio
* @author Jônas Florêncio
* @since 19/06/2019
* @date
* @sa
*/

#include <ctime>
#include "../include/anfibio.h"
#include <string>

//*********************** CONSTRUTOR/DESTRUTOR **************************
Anfibio::Anfibio(){}
Anfibio::~Anfibio(){}

//************************** S E T S ************************************
void Anfibio::set_total_de_mudas(int total){
    this->total_de_mudas = total;
}

void Anfibio::set_ultima_muda(std::string data){
    this->ultima_muda = data;
}

//************************** G E T S ************************************
int Anfibio::get_total_de_mudas(int total){
    return total_de_mudas;
}

std::string Anfibio::get_ultima_muda(){
    /**< FALTA FAZER!!!*/
    return " ";
}

//************************** O U T R A S ************************************