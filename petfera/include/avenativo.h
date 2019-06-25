/**
* @file avenativo.h
* @brief Arquivo de cabeçalho da classe AveNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "ave.h"
#include "animalnativo.h"

#ifndef AVENATIVO_H

#define AVENATIVO_H



class AveNativo : public Ave, public AnimalNativo  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AveNativo();
        AveNativo(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, double tamanho_do_bico_cm, double envergadura_das_asas, string uf_origem, string autorizacao);
        ~AveNativo();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif