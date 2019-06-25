/**
* @file mamiferonativo.h
* @brief Arquivo de cabeçalho da classe MamiferoNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "mamifero.h"
#include "animalnativo.h"

#ifndef MAMIFERONATIVO_H

#define MAMIFERONATIVO_H



class MamiferoNativo : public Mamifero, public AnimalNativo  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        MamiferoNativo();
        MamiferoNativo(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, string cor_pelo, string uf_origem, string autorizacao);
        ~MamiferoNativo();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif