#include "../include/mamiferonativo.h"
#include <string>

//*********************** CONSTRUTOR/DESTRUTOR **************************
MamiferoNativo::MamiferoNativo(){}
MamiferoNativo::MamiferoNativo(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, string cor_pelo, string uf_origem, string autorizacao) : Mamifero(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, cor_pelo), AnimalNativo(uf_origem, autorizacao, autorizacao_ibama){
    // total++;
}
MamiferoNativo::~MamiferoNativo(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************
        

//************************** O U T R A S ************************************
