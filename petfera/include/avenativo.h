/**
* @file avenativo.h
* @brief Arquivo de cabeçalho da classe AveNativo
* @author Jônas Florêncio
* @since 18/06/2019
* @date
* @sa
*/

#include "ave.h"
#include "animalnativo.h"

#ifndef AVENATIVO_H

#define AVENATIVO_H



class AveNativo : public Ave, AnimalNativo  {
   
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AveNativo();
        ~AveNativo();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************
        

        //************************** O U T R A S ********************************

};

#endif