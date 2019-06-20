/**
* @file anfibionativo.h
* @brief Arquivo de cabeçalho da classe AnfibioNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "anfibio.h"
#include "animalnativo.h"

#ifndef ANFIBIONATIVO_H

#define ANFIBIONATIVO_H



class AnfibioNativo : public Anfibio, AnimalNativo  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AnfibioNativo();
        ~AnfibioNativo();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ************************************

};

#endif