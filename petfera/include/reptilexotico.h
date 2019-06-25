/**
* @file reptilexotico.h
* @brief Arquivo de cabeçalho da classe ReptilExotico
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "reptil.h"
#include "animalexotico.h"

#ifndef REPTILEXOTICO_H

#define REPTILEXOTICO_H



class ReptilExotico : public Reptil, public AnimalExotico  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        ReptilExotico();
        ReptilExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, bool venenoso, string tipo_veneno, string pais_origem);
        ~ReptilExotico();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif