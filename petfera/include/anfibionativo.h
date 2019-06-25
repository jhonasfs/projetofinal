/**
* @file anfibionativo.h
* @brief Arquivo de cabeçalho da classe AnfibioNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "anfibio.h"
#include "animalnativo.h"

#ifndef ANFIBIONATIVO_H

#define ANFIBIONATIVO_H

using std::string;

class AnfibioNativo : public Anfibio, public AnimalNativo {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AnfibioNativo();
        AnfibioNativo(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, int total_de_mudas, string ultima_muda, string uf_origem, string autorizacao);
        ~AnfibioNativo();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ************************************

};

#endif