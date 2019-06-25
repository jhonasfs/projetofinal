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

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
Anfibio::Anfibio(){}
Anfibio::Anfibio(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas, string ultima_muda) : Animal(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo){
    set_total_de_mudas(total_de_mudas);
    set_ultima_muda(ultima_muda);
}  
Anfibio::~Anfibio(){}

//************************** S E T S ************************************
void Anfibio::set_total_de_mudas(int total){
    this->total_de_mudas = total;
}

void Anfibio::set_ultima_muda(string data){
    this->ultima_muda = data;
}

//************************** G E T S ************************************
int Anfibio::get_total_de_mudas(){
    return total_de_mudas;
}

string Anfibio::get_ultima_muda(){    
    return ultima_muda;
}

//************************** O U T R A S ************************************