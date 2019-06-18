/**
* @file funcionario.h
* @brief Arquivo de cabeçalho da classe Funcionario
* @author Jônas Florêncio
* @since 15/06/2019
* @date
* @sa
*/

#include <string>

using std::string;

#ifndef FUNCIONARIO_H

#define FUNCIONARIO_H

class Funcionario {
    protected:
        int id;   /**< Identificador do funcionário.*/
        string nome;  /**< Nome completo do funcionário.*/
        string cpf;   /**< CPF do funcionário.*/
        short idade;  /**< Idade do funcionário.*/
        short tipo_sanguineo;   /**< Tipo sanguineo (A, B, AB​, O) do funcionário.*/
        char fator_rh;    /**< Fator RH (+, -) do funcionário.*/
        string especialidade; /**< Especialidade do funcionário.*/
    
    public:
        //*********************** CONSTRUTOR/DESTRUTOR **************************
        Funcionario();
        ~Funcionario();

        //************************** S E T S ************************************
        /**
        * @brief Funcão que seta o ID do funcionário
        * @param id ID do funcionário
        * @return Vazio
        */
        void set_id(int id);

        /**
        * @brief Funcão que seta o nome do funcionário
        * @param nome nome do funcionário
        * @return Vazio
        */
        void set_nome(string nome);

        /**
        * @brief Funcão que seta o CPF do funcionário
        * @param CPF CPF do funcionário
        * @return Vazio
        */        
        void set_cpf(string cpf);

        /**
        * @brief Funcão que seta a idade do funcionário
        * @param idade idade do funcionário
        * @return Vazio
        */
        void set_idade(short idade);

        /**
        * @brief Funcão que seta o tipo sanguineo do funcionário
        * @param tipo tipo sanguineo do funcionário
        * @return Vazio
        */
        void set_tipo_sanguineo(short tipo);

        /**
        * @brief Funcão que seta o RH do funcionário
        * @param rh fator RH do funcionário
        * @return Vazio
        */
        void set_fator_rh(char rh);

        /**
        * @brief Funcão que seta a especialidade do funcionário
        * @param espec especialidade do funcionário
        * @return Vazio
        */
        void set_especialidade(string espec);


        //************************** G E T S ************************************
         /**
        * @brief Funcão que retorna o ID do funcionário
        * @param
        * @return ID do funcionário
        */
        int get_id();

        /**
        * @brief Funcão que retorna o nome do funcionário
        * @param
        * @return nome do funcionário
        */
        string get_nome();

        /**
        * @brief Funcão que retorna o CPF do funcionário
        * @param 
        * @return CPF do funcionário
        */        
        string get_cpf(string cpf);

        /**
        * @brief Funcão que retorna a idade do funcionário
        * @param
        * @return Idade do funcionário
        */
        short get_idade();

        /**
        * @brief Funcão que retorna o tipo sanguineo do funcionário
        * @param
        * @return Tipo sanguíneo do funcionário
        */
        short get_tipo_sanguineo(short tipo);

        /**
        * @brief Funcão que retorna o RH do funcionário
        * @param
        * @return Fator RH do funcionário
        */
        char get_fator_rh();

        /**
        * @brief Funcão que retorna a especialidade do funcionário
        * @param
        * @return Especialidade do funcionário
        */
        string get_especialidade();

        //************************** O U T R A S ************************************
    
};


#endif