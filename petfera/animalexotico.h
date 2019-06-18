/**
* @file animalexotico.h
* @brief Arquivo de cabeçalho da classe AnimalExotico
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include "animalsilvestre.h"
#include <string>

using std::string;

#ifndef ANIMALEXOTICO_H

#define ANIMALEXOTICO_H



class AnimalExotico : public  AnimalSilvestre{
    protected:
        string pais_origem; /**< Pais de origem do animal.*/        

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AnimalExotico();
        ~AnimalExotico();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta o pais de origem do animal
        * @param pais Pais do animal
        * @return Vazio
        */
        void set_pais_origem(string pais);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna o pais de origem do animal
        * @param
        * @return Pais do animal
        */
        string get_pais_origem();

        //************************** O U T R A S ************************************

};

#endif