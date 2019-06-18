/**
* @file ave.h
* @brief Arquivo de cabeçalho da classe Ave
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include "animal.h"

#ifndef AVE_H

#define AVE_H



class Ave : public Animal {
    protected:
        double tamanho_do_bico_cm; /**< Tamanho do bico do animal em cm */
        double envergadora_das_asas; /**< Envergadura das asas em cm do animal.*/

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Ave();
        ~Ave();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta o tamanho do bico do animal
        * @param tamanho Tamanho do bico em cm
        * @return Vazio
        */
        void tamanho_do_bico_cm(double tamanho);

        /**
        * @brief Funcão que seta a envergadora das asas do animal
        * @param envergadora envergadora das asas do animal
        * @return Vazio
        */
        void set_envergadora_das_asas(double envergadora);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna o tamanho do bico do animal
        * @param
        * @return Tamanho do bico em cm
        */
        double tamanho_do_bico_cm();

        /**
        * @brief Funcão que retorna a envergadora das asas do animal
        * @param 
        * @return Envergadora das asas do animal
        */
        double get_envergadora_das_asas();

        //************************** O U T R A S ************************************

};

#endif