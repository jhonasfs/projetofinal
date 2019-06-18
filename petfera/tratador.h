/**
* @file tratador.h
* @brief Arquivo de cabeçalho da classe Tratador
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include <string>
#include "funcionario.h"

#ifndef TRATADOR_H

#define TRATADOR_H


class Tratador : public Funcionario{
    private:
        int nivel_de_seguranca;   /**< Nível de segurança (0, 1, 2) do tratador.*/

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Tratador();
        ~Tratador();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta o nível de segurança do tratador
        * @param nivel nível de segurança do tratador.
        * @return Vazio
        */
        void set_nivel_de_seguranca(int nivel);

        //************************** G E T S ************************************
         /**
        * @brief Funcão que retorna o nível de segurança do tratador
        * @param
        * @return nível de seguranca tratator
        */
        int get_nivel_de_seguranca();

        //************************** O U T R A S *********************************
};



#endif