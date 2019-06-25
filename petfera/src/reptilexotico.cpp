#include "../include/reptilexotico.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
ReptilExotico::ReptilExotico(){}
ReptilExotico::ReptilExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, bool venenoso, string tipo_veneno, string pais_origem) : Reptil(classe, nome_cientifico, sexo, tamanho,  dieta, id_veterinario, id_tratador, nome_batismo, venenoso, tipo_veneno), AnimalExotico(pais_origem, autorizacao_ibama){
    // total++;
}
ReptilExotico::~ReptilExotico(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************
        

//************************** O U T R A S ************************************
