/**
* @file anfibio.h
* @brief Arquivo de cabeçalho da classe Anfibio
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include "animal.h"
#include <string>

#ifndef ANFIBIO_H

#define ANFIBIO_H

using std::string;

class Anfibio : public Animal {
    protected:
        int total_de_mudas; /**< Total de mudas do animal.*/
        string ultima_muda; /**< Data da última muda do animal.*/

    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Anfibio();
        Anfibio(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas, string ultima_muda);
        ~Anfibio();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta o total de mudas do animal
        * @param total Total de mudas do animal
        * @return Vazio
        */
        void set_total_de_mudas(int total);

        /**
        * @brief Funcão que seta a data da última muda do animal
        * @param dia, mes, ano Dia, mês e ano da última muda do animal
        * @return Vazio
        */
        void set_ultima_muda(string);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna o total de mudas do animal
        * @param 
        * @return Total de mudas do animal
        */
        int get_total_de_mudas();

        /**
        * @brief Funcão que retorma a data da última muda do animal
        * @param
        * @return Data da última muda do animal
        */
        string get_ultima_muda();

        //************************** O U T R A S ************************************

};

#endif