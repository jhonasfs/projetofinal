/**
* @file reptil.h
* @brief Arquivo de cabeçalho da classe Reptil
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include "animal.h"
#include <string>

using std::string;

#ifndef REPTIL_H

#define REPTIL_H



class Reptil : public Animal {
    protected:
        bool venenoso; /**< Animal venenoso ou não.*/
        string tipo_veneno; /**< Tipo do veneno do animal.*/

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Reptil();
        Reptil(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, bool venenoso, string tipo_veneno);
        ~Reptil();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta se o animal é veneno ou não
        * @param venenoso True se venenoso, false se não venenoso
        * @return Vazio
        */
        void set_venenoso(bool venenoso);

        /**
        * @brief Funcão que seta o tipo de veneno do animal
        * @param tipo Tipo do veneno do animal
        * @return Vazio
        */
        void set_tipo_veneno(string tipo);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna se o animal animal é venenoso ou não
        * @param 
        * @return True se venenoso, false se não venenoso
        */
        bool get_venenoso();

        /**
        * @brief Funcão que retorma o tipo de veneno do animal
        * @param
        * @return Tipo de veneno do animal
        */
        string get_tipo_veneno();

        //************************** O U T R A S ************************************

};

#endif