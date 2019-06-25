/**
* @file animalsilvestre.h
* @brief Arquivo de cabeçalho da classe AnimalSilvestre
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include <string>

using std::string;

#ifndef ANIMAL_SILVESTRE_H

#define ANIMAL_SILVESTRE_H



class AnimalSilvestre{
    private:
        string autorizacao_ibama; /**< Autorização do IBAMA para portar o animal.*/
        
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        AnimalSilvestre();
        AnimalSilvestre(string autorizacao_ibama);
        ~AnimalSilvestre();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta a autorização IBAMA para animal
        * @param autorizacao Autorização IBAMA
        * @return
        */
        void set_autorizacao_ibama(string autorizacao);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna a autorização IBAMA para animal
        * @param FAZER A SOBRECARGA DESTA FUNÇÂO NAS OUTRAS CLASSES FILHAS
        * @return Autorização IBAMA
        */
        string get_autorizacao_ibama();

        //************************** O U T R A S ************************************

};

#endif