/**
* @file petfera.cpp
* @brief Arquivo de implementação da classe PetFera
* @author Jônas Florêncio
* @since 20/06/2019
* @date
* @sa
*/

#define VETERINARIO 0
#define TRATADOR 1

// #define ANFIBIONATIVO 0
// #define MANIFERONATIVO 1
// #define REPTILNATIVO 2
// #define AVENATIVO 3

// #define ANFIBIOEXOTICO 10
// #define MANIFEROEXOTICO 11
// #define REPTILEXOTICO 12
// #define AVEEXOTICO 13

#define NATIVO 0
#define EXOTICO 1

// #include <iostream>

#include <map>
#include <utility>
#include <sstream>
#include "../include/animal.h"
#include "../include/funcionario.h"
#include "../include/veterinario.h"
#include "../include/tratador.h"
#include "../include/anfibionativo.h"
#include "../include/petfera.h"

//*********************** CONSTRUTOR/DESTRUTOR **************************
PetFera::PetFera(){}
PetFera::~PetFera(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************


//************************** O U T R A S ************************************

bool PetFera::cadastroAnimal(stringstream *ss){
    // int id; /**< Identificador do animal.*/
    // string classe;  /**< Classe do animal: Amphibia (anfíbio), ​ Reptilia (réptil), ​ Aves (ave), Mammalia ​ (mamífero)*/
    // string nome_cientifico; /**< Nome científico do animal.*/
    // char sexo;  /**< Sexo (M (macho), F (fêmea)) do animal.*/
    // double tamanho; /**< Tamanho médio em metros do animal.*/
    // string dieta;   /**< Dieta alimenticia do animal do animal.*/
    // int id_veterinario; /**< Identificador do veterinário responsável pelo animal.*/
    // int id_tratador;     /**< Identificador do tratador responsável pelo animal.*/
    // string nome_batismo;     /**< Nome de batismo do animal.*/
    // string autorizacao_ibama; /**< Autorização do IBAMA para portar o animal.*/

    // int tipo;

    // *ss >> tipo;

    // *ss >> classe;
    // ss->ignore();
    // getline(*ss, nome_cientifico);
    // *ss >> sexo;
    // *ss >> tamanho;
    // ss->ignore();
    // getline(*ss, dieta);
    // *ss >> id_veterinario;
    // *ss >> id_tratador;
    // ss->ignore();
    // getline(*ss, nome_batismo);    
    // getline(*ss, autorizacao_ibama);

    // if (classe == "Anfíbio"){
    //     int total_de_mudas; /**< Total de mudas do animal.*/
    //     string ultima_muda; /**< Data da última muda do animal.*/

    //     *ss >> total_de_mudas;
    //     *ss >> ultima_muda;

    //     if (tipo == NATIVO){
    //         string uf_origem; /**< UF de origem do animal.*/
    //         string autorizacao; /**< Autorização do animal*/

    //         *ss >> uf_origem;
    //         *ss >> autorizacao;

    //         AnfibioNativo *anfNat = new AnfibioNativo();

    //         id = anfNat->total;

    //         anfNat->set_id(id);
    //         anfNat->set_classe(classe);
    //         anfNat->set_nome_cientifico(nome_cientifico);
    //         anfNat->set_sexo(sexo);
    //         anfNat->set_tamanho(tamanho);
    //         anfNat->set_dieta(dieta);
    //         anfNat->set_id_veterinario(id_veterinario);
    //         anfNat->set_id_tratador(id_tratador);
    //         anfNat->set_nome_batismo(nome_batismo);
    //         // anfNat->set_autorizacao_ibama(autorizacao_ibama);
            

    //     }
    // }

    

    return true;
}

bool PetFera::cadastroFuncionario(stringstream *ss){
    int id = 0;   /**< Identificador do funcionário.*/
    string nome;  /**< Nome completo do funcionário.*/
    string cpf;   /**< CPF do funcionário.*/
    short idade;  /**< Idade do funcionário.*/
    short tipo_sanguineo;   /**< Tipo sanguineo (A, B, AB​, O) do funcionário.*/
    char fator_rh;    /**< Fator RH (+, -) do funcionário.*/
    string especialidade; /**< Especialidade do funcionário.*/

    int tipo;

    *ss >> tipo;
    ss->ignore();
    getline(*ss, nome);
    //ss->ignore();
    *ss >> cpf;
    *ss >> idade;
    *ss >> tipo_sanguineo;
    *ss >> fator_rh;
    *ss >> especialidade;
    
    if (tipo == VETERINARIO){    
        Veterinario *vet = new Veterinario();
        id = vet->total;
        string crmv;
        *ss >> crmv;
        vet->set_id(id);
        vet->set_nome(nome);
        vet->set_cpf(cpf);
        vet->set_idade(idade);
        vet->set_tipo_sanguineo(tipo_sanguineo);
        vet->set_fator_rh(fator_rh);
        vet->set_especialidade(especialidade);
        vet->set_crmv(crmv);

        funcionarios[id] = make_pair(VETERINARIO, (Funcionario) *vet);
    } else if (tipo == TRATADOR) {
        Tratador *ttd = new Tratador();
        id = ttd->total;
        int nivel_de_seguranca;
        *ss >> nivel_de_seguranca;
        ttd->set_id(id);
        ttd->set_nome(nome);
        ttd->set_cpf(cpf);
        ttd->set_idade(idade);
        ttd->set_tipo_sanguineo(tipo_sanguineo);
        ttd->set_fator_rh(fator_rh);
        ttd->set_especialidade(especialidade);
        ttd->set_nivel_de_seguranca(nivel_de_seguranca);

        funcionarios[id] = make_pair(TRATADOR, (Funcionario) *ttd);
    } else {
        return false;
    }

    // std::cout << id  << nome << cpf << idade << tipo_sanguineo << fator_rh << especialidade << std::endl;

    return true;
}