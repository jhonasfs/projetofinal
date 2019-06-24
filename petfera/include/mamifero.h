/**
* @file mamifero.h
* @brief Arquivo de cabeçalho da classe Mamifero
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include "animal.h"
#include <string>

#ifndef MAMIFERO_H

#define MAMIFERO_H

using std::string;

class Mamifero : public Animal {
    protected:
        std::string cor_pelo; /**< Cor do pelo do animal.*/
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Mamifero(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, string cor_pelo);
        ~Mamifero();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta a cor do pelo do animal
        * @param cor Cor do pelo do animal
        * @return Vazio
        */
        void set_cor_pelo(std::string cor);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna a cor do pelo do animal
        * @param 
        * @return Cor do pelo do animal
        */
        std::string get_cor_pelo();

        //************************** O U T R A S ************************************

};

#endif