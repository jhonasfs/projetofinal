/**
* @file reptilnativo.h
* @brief Arquivo de cabeçalho da classe ReptilNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "reptil.h"
#include "animalnativo.h"

#ifndef REPTILNATIVO_H

#define REPTILNATIVO_H



class ReptilNativo : public Reptil, public AnimalNativo  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        ReptilNativo();
        ReptilNativo(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo,  string autorizacao_ibama, bool venenoso, string tipo_veneno, string uf_origem, string autorizacao);
        ~ReptilNativo();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif