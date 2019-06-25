#include "../include/reptilnativo.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
ReptilNativo::ReptilNativo(){}
ReptilNativo::ReptilNativo(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, bool venenoso, string tipo_veneno, string uf_origem, string autorizacao) : Reptil(classe, nome_cientifico, sexo, tamanho,  dieta, id_veterinario, id_tratador, nome_batismo, venenoso, tipo_veneno), AnimalNativo(uf_origem, autorizacao, autorizacao_ibama){
    // total++;
}
ReptilNativo::~ReptilNativo(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************
        

//************************** O U T R A S ************************************
