#include "../include/anfibioexotico.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
AnfibioExotico::AnfibioExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas, std::string ultima_muda, string autorizacao_ibama, string pais_origem) : Anfibio(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, total_de_mudas, ultima_muda), AnimalExotico(pais_origem, autorizacao_ibama){
    // total++;
}
AnfibioExotico::~AnfibioExotico(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************
        

//************************** O U T R A S ********************************
