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
Reptil::Reptil(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, bool venenoso, string tipo_veneno) : Animal(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo){
    set_venenoso(venenoso);
    set_tipo_veneno(tipo_veneno);
}
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