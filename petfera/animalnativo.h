/**
* @file animalnativo.h
* @brief Arquivo de cabeçalho da classe AnimalNativo
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include "animalsilvestre.h"
#include <string>

using std::string;

#ifndef REPTIL_H

#define REPTIL_H



class AnimalNativo : public  AnimalSilvestre{
    protected:
        string uf_origem; /**< UF de origem do animal.*/
        string autorizacao; /**< Autorização do animal*/

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AnimalNativo();
        ~AnimalNativo();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta a UF de origem do animal
        * @param uf UF do animal
        * @return Vazio
        */
        void set_uf_origem(string uf);

        /**
        * @brief Funcão que seta a autorizacao do animal
        * @param autorizacao Autorização
        * @return Vazio
        */
        void set_autorizacao(string autorizacao);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna a UF de origem do animal
        * @param
        * @return UF do animal
        */
        string get_uf_origem();

        /**
        * @brief Funcão que retorna a autorizacao do animal
        * @param
        * @return Autorização
        */
        string get_autorizacao();

        //************************** O U T R A S ************************************

};

#endif