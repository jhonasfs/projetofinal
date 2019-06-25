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
#include <string>
#include "animal.h"
#include "anfibionativo.h"
#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"

#ifndef PETFERA_H

#define PETFERA_H

using namespace std;

class PetFera {
    private:
        map <int, pair<int, Animal* > > animais;   /**< Lista dos animais cadastrados no sistema.*/
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
        bool CadastrarAnimal(stringstream *ss);

        /**
        * @brief Funcão que remove um animal no sistema
        * @param ID do animal a ser removido;
        * @return True/False
        */
        bool RemoverAnimal(int id);

        /**
        * @brief Funcão que alterar dados de um animal no sistema por id
        * @param FALTA FAZER
        * @return FALTA FAZER COLOCAR A KEYS DO MAP 
        */
        bool AlterarAnimal(int id, map< string, string > dados);

        /**
        * @brief Funcão que consulta um animal no sistema por id ou por classe
        * @param ID/classe do(s) animal(is) a ser consultado; FALTA FAZER
        * @return stringstream com todos os dados dos animais separador por tabulatura e linha
        */
        string ConsultarAnimal(short tipo_cunsulta, int id, string classe);

         /**
        * @brief Funcão que consulta um animal no sistema por id do veterinario ou tratador
        * @param FALTA FAZER
        * @return stringstream com todos os dados dos animais separador por tabulatura e linha
        */
        string ConsultarAnimal_Vet_Trat(short tipo_cunsulta, int id);

         /**
        * @brief Funcão que cadastra um funcionario no sistema
        * @param Falta fazer
        * @return True/False
        */
        bool cadastroFuncionario(stringstream *ss);  

};

#endif