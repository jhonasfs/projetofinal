/**
* @file aveexotico.h
* @brief Arquivo de cabeçalho da classe AveExotico
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "ave.h"
#include "animalexotico.h"

#ifndef AVEEXOTICO_H

#define AVEEXOTICO_H



class AveExotico : public Ave, AnimalExotico  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AveExotico();
        ~AveExotico();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif