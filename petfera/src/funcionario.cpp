/**
* @file funcionario.cpp
* @brief Arquivo de implementação da classe Funcionario
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "../include/funcionario.h"
#include <string>

using std::string;

int Funcionario::total = 0;

//*********************** CONSTRUTOR/DESTRUTOR **************************
Funcionario::Funcionario(){
    // total++;
}
Funcionario::~Funcionario(){}

//************************** S E T S ************************************

void Funcionario::set_id(int id){
    this->id = id;
}

void Funcionario::set_nome(string nome){
    this-> nome = nome;
}

void Funcionario::set_cpf(string cpf){
    this-> cpf = cpf;
}

void Funcionario::set_idade(short idade){
    this-> idade = idade;
}

void Funcionario::set_tipo_sanguineo(short tipo){
    this->tipo_sanguineo = tipo;
}

void Funcionario::set_fator_rh(char rh){
    this-> fator_rh = rh;
}

void Funcionario::set_especialidade(string espec){
    this-> especialidade = espec;
}

//************************** G E T S ************************************

int Funcionario::get_id(){
    return id;
}

string Funcionario::get_nome(){
    return nome;
}

string Funcionario::get_cpf(string cpf){
    return cpf;
}

short Funcionario::get_idade(){
    return idade;
}

short Funcionario::get_tipo_sanguineo(){
    return tipo_sanguineo;
}

char Funcionario::get_fator_rh(){
    return fator_rh;
}

string Funcionario::get_especialidade(){
    return especialidade;
}