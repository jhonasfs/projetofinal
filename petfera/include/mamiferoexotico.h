/**
* @file mamiferoexotico.h
* @brief Arquivo de cabeçalho da classe MamiferoExotico
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "mamifero.h"
#include "animalexotico.h"

#ifndef MAMIFEROEXOTICO_H

#define MAMIFEROEXOTICO_H



class MamiferoExotico : public Mamifero, AnimalExotico  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        MamiferoExotico();
        ~MamiferoExotico();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif