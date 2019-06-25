#include "../include/mamiferoexotico.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
MamiferoExotico::MamiferoExotico(){}
MamiferoExotico::MamiferoExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, string cor_pelo, string pais_origem) : Mamifero(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, cor_pelo), AnimalExotico(pais_origem, autorizacao_ibama){
    // total++;
}
MamiferoExotico::~MamiferoExotico(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************
        

//************************** O U T R A S ************************************
