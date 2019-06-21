/**
* @file mamiferonativo.h
* @brief Arquivo de cabeçalho da classe MamiferoNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "mamifero.h"
#include "animalnativo.h"

#ifndef MAMIFERONATIVO_H

#define MAMIFERONATIVO_H



class MamiferoNativo : public Mamifero, AnimalNativo  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        MamiferoNativo();
        ~MamiferoNativo();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif