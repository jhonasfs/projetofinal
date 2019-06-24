/**
* @file animal.h
* @brief Arquivo de cabeçalho da classe Animal
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include <string>
// #include "veterinario.h"

using std::string;

#ifndef ANIMAL_H

#define ANIMAL_H



class Animal {
    protected:
        int id; /**< Identificador do animal.*/
        string classe;  /**< Classe do animal: Amphibia (anfíbio), ​ Reptilia (réptil), ​ Aves (ave), Mammalia ​ (mamífero)*/
        string nome_cientifico; /**< Nome científico do animal.*/
        char sexo;  /**< Sexo (M (macho), F (fêmea)) do animal.*/
        double tamanho; /**< Tamanho médio em metros do animal.*/
        string dieta;   /**< Dieta alimenticia do animal do animal.*/
        int id_veterinario; /**< Identificador do veterinário responsável pelo animal.*/
        int id_tratador;     /**< Identificador do tratador responsável pelo animal.*/
        string nome_batismo;     /**< Nome de batismo do animal.*/
    
    public:
        static int total;

        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Animal(string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo);
        ~Animal();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta o id do animal
        * @param id ID do animal
        * @return Vazio
        */
        void set_id(int id);

        /**
        * @brief Funcão que seta a classe do animal
        * @param classe Classe do animal
        * @return Vazio
        */
        void set_classe (string classe);

        /**
        * @brief Funcão que seta o nome cientifico do animal
        * @param nome Nome científico do animal
        * @return Vazio
        */
        void set_nome_cientifico (string nome);

        /**
        * @brief Funcão que seta o sexo do animal
        * @param sexo Sexo do animal
        * @return Vazio
        */
        void set_sexo(char sexo);

        /**
        * @brief Funcão que seta o tamanho do animal
        * @param tamanho Tamanho do animal
        * @return Vazio
        */
        void set_tamanho(double tamanho);
        
        /**
        * @brief Funcão que seta a dieta do animal
        * @param dieta Dieta do animal
        * @return Vazio
        */
        void set_dieta(string dieta);
        
        /**
        * @brief Funcão que seta o id do veterinario do animal
        * @param id ID do veterinario do animal
        * @return Vazio
        */
        void set_id_veterinario(int id);
        
        /**
        * @brief Funcão que seta o id do tratador do animal
        * @param id ID do tratador do animal
        * @return Vazio
        */
        void set_id_tratador(int id);

        /**
        * @brief Funcão que seta o nome de batismo do animal
        * @param nome nome de batismo do animal
        * @return Vazio
        */
        void set_nome_batismo(string nome);

        //************************** G E T S ************************************
        /**
        * @brief Funcão que retorna o id do animal
        * @param
        * @return ID do animal
        */
        int get_id();

        /**
        * @brief Funcão que retorna a classe do animal
        * @param 
        * @return Classe do animal
        */
        string get_classe ();

        /**
        * @brief Funcão que retorna o nome cientifico do animal
        * @param nome Nome científico do animal
        * @return Vazio
        */
        string get_nome_cientifico ();

        /**
        * @brief Funcão que retorna o sexo do animal
        * @param  
        * @return Sexo do animal
        */
        char get_sexo();

        /**
        * @brief Funcão que retorna o tamanho do animal
        * @param 
        * @return Tamanho do animal
        */
        double get_tamanho();
        
        /**
        * @brief Funcão que retorna a dieta do animal
        * @param
        * @return Dieta do animal
        */
        string get_dieta();
        
        /**
        * @brief Funcão que retorna o id do veterinario do animal
        * @param
        * @return ID do veterinario do animal
        */
        int get_id_veterinario();
        
        /**
        * @brief Funcão que retorna o id do tratador do animal
        * @param
        * @return ID do tratador do animal
        */
        int get_id_tratador();

        /**
        * @brief Funcão que retorna o nome de batismo do animal
        * @param 
        * @return Nome de batismo do animal
        */
        string get_nome_batismo();

        //************************** O U T R A S ************************************

};

#endif