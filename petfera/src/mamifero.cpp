/**
* @file mamifero.cpp
* @brief Arquivo de implementação da classe Mamifero
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "../include/mamifero.h"
#include <string>

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
Mamifero::Mamifero(){}
Mamifero::Mamifero(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, string cor_pelo) : Animal(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo){
    set_cor_pelo(cor_pelo);
}
Mamifero::~Mamifero(){}

//************************** S E T S ************************************
void Mamifero::set_cor_pelo(string cor){
    this->cor_pelo = cor;
}

//************************** G E T S ************************************

string Mamifero::get_cor_pelo(){
    return cor_pelo;
}

//************************** O U T R A S ***********************************
