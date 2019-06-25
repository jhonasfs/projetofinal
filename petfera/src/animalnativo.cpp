/**
* @file animalnativo.cpp
* @brief Arquivo de implementação da classe AnimalNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "../include/animalnativo.h"
#include <string>

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
AnimalNativo:: AnimalNativo(){}
AnimalNativo:: AnimalNativo(string uf_origem, string autorizacao, string autorizacao_ibama) : AnimalSilvestre(autorizacao_ibama){
    set_uf_origem(uf_origem);
    set_autorizacao(autorizacao);
}
AnimalNativo::~AnimalNativo(){}

//************************** S E T S ************************************

void AnimalNativo::set_uf_origem(string uf){
    this->uf_origem = uf;
}

void AnimalNativo::set_autorizacao(string autorizacao){
    this-> autorizacao = autorizacao;
}

//************************** G E T S ************************************

string AnimalNativo::get_uf_origem(){
    return uf_origem;
}

string AnimalNativo::get_autorizacao(){
    return autorizacao;
}

//************************** O U T R A S ************************************