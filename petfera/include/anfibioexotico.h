/**
* @file anfibioexotico.h
* @brief Arquivo de cabeçalho da classe AnfibioExotico
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "anfibio.h"
#include "animalexotico.h"

#ifndef ANFIBIOEXOTICO_H

#define ANFIBIOEXOTICO_H



class AnfibioExotico : public Anfibio, AnimalExotico{
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AnfibioExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas, std::string ultima_muda, string autorizacao_ibama, string pais_origem);
        ~AnfibioExotico();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ************************************

};

#endif