/**
* @file mamiferoexotico.h
* @brief Arquivo de cabeçalho da classe MamiferoExotico
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "mamifero.h"
#include "animalexotico.h"

#ifndef MAMIFEROEXOTICO_H

#define MAMIFEROEXOTICO_H



class MamiferoExotico : public Mamifero, public AnimalExotico  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        MamiferoExotico();
        MamiferoExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, string cor_pelo, string pais_origem);
        ~MamiferoExotico();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif