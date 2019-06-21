/**
* @file petfera.h
* @brief Arquivo de cabeçalho da classe PetFera
* @author Jônas Florêncio
* @since 20/06/2019
* @date
* @sa
*/

#include <map>
#include <utility>
#include <sstream>
#include "animal.h"
#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"

using namespace std;

#ifndef PETFERA_H

#define PETFERA_H

class PetFera {
    private:
        map <int, pair<int, Animal> > animais;   /**< Lista dos animais cadastrados no sistema.*/
        map <int, pair<int, Funcionario> > funcionarios;   /**< Lista dos funcionários cadastrados no sistema.*/

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        PetFera();
        ~PetFera();

        //************************** S E T S ************************************
        

        //************************** G E T S ************************************      


        //************************** O U T R A S ************************************
        /**
        * @brief Funcão que cadastra um animal no sistema
        * @param Falta fazer
        * @return True/False
        */
        bool cadastroAnimal(stringstream *ss);

         /**
        * @brief Funcão que cadastra um funcionario no sistema
        * @param Falta fazer
        * @return True/False
        */
        bool cadastroFuncionario(stringstream *ss);  

};

#endif