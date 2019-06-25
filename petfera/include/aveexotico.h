/**
* @file aveexotico.h
* @brief Arquivo de cabeçalho da classe AveExotico
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "ave.h"
#include "animalexotico.h"

#ifndef AVEEXOTICO_H

#define AVEEXOTICO_H



class AveExotico : public Ave, public AnimalExotico  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AveExotico();
        AveExotico(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, double tamanho_do_bico_cm, double envergadura_das_asas, string pais_origem);
        ~AveExotico();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif