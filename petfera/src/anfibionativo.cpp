#include "../include/anfibionativo.h"
#include <string>

using std::string;

//*********************** CONSTRUTOR/DESTRUTOR **************************
AnfibioNativo::AnfibioNativo(){}
AnfibioNativo::AnfibioNativo(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, int total_de_mudas, string ultima_muda, string uf_origem, string autorizacao) : Anfibio(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, total_de_mudas, ultima_muda), AnimalNativo(uf_origem, autorizacao, autorizacao_ibama){
    // total++;
}
AnfibioNativo::~AnfibioNativo(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************
        

//************************** O U T R A S ********************************
