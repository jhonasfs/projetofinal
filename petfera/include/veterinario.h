/**
* @file veterinario.h
* @brief Arquivo de cabeçalho da classe Veterinario
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include <string>
#include "funcionario.h"

#ifndef VETERINARIO_H

#define VETERINARIO_H


class Veterinario : public Funcionario {
    private:
        std::string crmv;   /**< Código CRMV (Conselho Regional de Medicina Veterinária) do veterinário.*/

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Veterinario();
        ~Veterinario();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta o crmv do veterinário
        * @param id CRMV do veterinário
        * @return Vazio
        */
        void set_crmv(std::string crmv);

        //************************** G E T S ************************************
         /**
        * @brief Funcão que retorna o crmv do veterinário
        * @param
        * @return CRMV do funcionário
        */
        std::string get_crmv();

        //************************** O U T R A S ************************************
};



#endif