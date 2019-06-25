/**
* @file animal.cpp
* @brief Arquivo de implementação da classe Animal
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include <string>
#include "../include/animal.h"

using std::string;

// int Animal::total = 0;

//*********************** CONSTRUTOR/DESTRUTOR **************************
Animal::Animal(){}
Animal::Animal(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo){
    total++;
    set_id(get_total());
    set_classe(classe);
    set_nome_cientifico(nome_cientifico);
    set_sexo(sexo);
    set_tamanho(tamanho);
    set_dieta(dieta);
    set_id_veterinario(id_veterinario);
    set_id_tratador(id_tratador);
    set_nome_batismo(nome_batismo);
}
Animal::~Animal(){}

//************************** S E T S ************************************

void Animal::set_id(int id){
    this->id = id;
}

void Animal::set_classe (string classe){
    this->classe = classe;
}

void Animal::set_nome_cientifico (string nome){
    this->nome_cientifico = nome;
}

void Animal::set_sexo(char sexo){
    this->sexo = sexo;
}

void Animal::set_tamanho(double tamanho){
    this-> tamanho = tamanho;
}

void Animal::set_dieta(string dieta){
    this->dieta = dieta;
}

void Animal::set_id_veterinario(int id){
    this-> id_veterinario = id;
}

void Animal::set_id_tratador(int id){
    this-> id_tratador = id;
}

void Animal::set_nome_batismo(string nome){
    this->nome_batismo = nome;
}

//************************** G E T S ************************************

int Animal::get_id(){
    return id;
}

string Animal::get_classe (){
    return classe;
}

string Animal::get_nome_cientifico (){
    return nome_cientifico;
}

char Animal::get_sexo(){
    return sexo;
}

double Animal::get_tamanho(){
    return tamanho;
}

string Animal::get_dieta(){
    return dieta;
}

int Animal::get_id_veterinario(){
    return id_veterinario;
}

int Animal::get_id_tratador(){
    return id_tratador;
}

string Animal::get_nome_batismo(){
    return nome_batismo;
}

int Animal::get_total(){
    return total;
}

//************************** O U T R A S ************************************

