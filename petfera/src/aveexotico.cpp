#include "../include/aveexotico.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
AveExotico::AveExotico(){}
AveExotico::AveExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, double tamanho_do_bico_cm, double envergadura_das_asas, string pais_origem) : Ave(classe, nome_cientifico, sexo, tamanho,  dieta, id_veterinario, id_tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas ), AnimalExotico(pais_origem, autorizacao_ibama){
    // total++;
}
AveExotico::~AveExotico(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************
        

//************************** O U T R A S ************************************
