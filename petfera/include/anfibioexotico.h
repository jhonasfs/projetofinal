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
        AnfibioExotico();
        ~AnfibioExotico();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ************************************

};

#endif