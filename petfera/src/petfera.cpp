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
#include <string>

#include "../include/animal.h"
#include "../include/funcionario.h"
#include "../include/veterinario.h"
#include "../include/tratador.h"
#include "../include/anfibionativo.h"
#include "../include/anfibioexotico.h"
#include "../include/mamiferonativo.h"
#include "../include/mamiferoexotico.h"
#include "../include/reptilnativo.h"
#include "../include/reptilexotico.h"
#include "../include/avenativo.h"
#include "../include/aveexotico.h"
#include "../include/animalsilvestre.h"
#include "../include/animalnativo.h"
#include "../include/animalexotico.h"
#include "../include/petfera.h"

using namespace std;

int Animal::total = 0;

//*********************** CONSTRUTOR/DESTRUTOR **************************
PetFera::PetFera(){}
PetFera::~PetFera(){}

//************************** S E T S ************************************
        

//************************** G E T S ************************************


//************************** O U T R A S ************************************

bool PetFera::cadastrarAnimal(stringstream *ss){
    //int id; /**< Identificador do animal.*/
    string classe;  /**< Classe do animal: Amphibia (anfíbio), ​ Reptilia (réptil), ​ Aves (ave), Mammalia ​ (mamífero)*/
    string nome_cientifico; /**< Nome científico do animal.*/
    char sexo;  /**< Sexo (M (macho), F (fêmea)) do animal.*/
    double tamanho; /**< Tamanho médio em metros do animal.*/
    string dieta;   /**< Dieta alimenticia do animal do animal.*/
    int id_veterinario; /**< Identificador do veterinário responsável pelo animal.*/
    int id_tratador;     /**< Identificador do tratador responsável pelo animal.*/
    string nome_batismo;     /**< Nome de batismo do animal.*/
    string autorizacao_ibama; /**< Autorização do IBAMA para portar o animal.*/

    int tipo;

    *ss >> tipo;

    *ss >> classe;
    ss->ignore();
    getline(*ss, nome_cientifico);
    *ss >> sexo;
    *ss >> tamanho;
    ss->ignore();
    getline(*ss, dieta);
    *ss >> id_veterinario;
    *ss >> id_tratador;
    ss->ignore();
    getline(*ss, nome_batismo);
    getline(*ss, autorizacao_ibama);

    if (classe == "Anfíbio"){
        int total_de_mudas; /**< Total de mudas do animal.*/
        string ultima_muda; /**< Data da última muda do animal.*/

        *ss >> total_de_mudas;
        *ss >> ultima_muda;

        if (tipo == NATIVO){
            string uf_origem; /**< UF de origem do animal.*/
            string autorizacao; /**< Autorização do animal*/

            *ss >> uf_origem;
            ss->ignore();
            getline(*ss, autorizacao);
            // *ss >> autorizacao;

            AnfibioNativo *AnfNat = new AnfibioNativo(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama, total_de_mudas, ultima_muda, uf_origem, autorizacao);
            animais[AnfNat->get_id()] = make_pair(NATIVO, AnfNat);
            //delete AnfNat;
        } else if (tipo == EXOTICO){
            string pais_origem;
            ss->ignore();
            getline(*ss, pais_origem);
            // *ss >> pais_origem;

            AnfibioExotico *AnfExo = new AnfibioExotico(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama, total_de_mudas, ultima_muda, pais_origem);
            animais[AnfExo->get_id()] = make_pair(EXOTICO, AnfExo);
            //delete AnfExo;
        } else {
            return false;
        }
    } else if (classe == "Mamífero") {
        string cor_pelo; /**< Cor do pelo do animal.*/
        ss->ignore();
        getline(*ss, cor_pelo);
        //*ss >> cor_pelo;

        if (tipo == NATIVO){
            string uf_origem; /**< UF de origem do animal.*/
            string autorizacao; /**< Autorização do animal*/

            *ss >> uf_origem;
            
            ss->ignore();
            getline(*ss, autorizacao);

            MamiferoNativo *MamNat = new MamiferoNativo(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama, cor_pelo, uf_origem, autorizacao);
            animais[MamNat->get_id()] = make_pair(NATIVO, MamNat);
            //delete MamNat;
        } else if (tipo == EXOTICO){
            string pais_origem;
            *ss >> pais_origem;

            MamiferoExotico *MamExo = new MamiferoExotico(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama, cor_pelo, pais_origem);
            animais[MamExo->get_id()] = make_pair(EXOTICO, MamExo);
            //delete MamExo;
        } else {
            return false;
        }
    } else if (classe == "Reptil"){
        bool venenoso; /**< Animal venenoso ou não.*/
        string tipo_veneno; /**< Tipo do veneno do animal.*/

        *ss >> venenoso;
        *ss >> tipo_veneno;

        if (tipo == NATIVO){
            string uf_origem; /**< UF de origem do animal.*/
            string autorizacao; /**< Autorização do animal*/

            *ss >> uf_origem;
            ss->ignore();
            getline(*ss, autorizacao);
            //*ss >> autorizacao;

            ReptilNativo *RepNat = new ReptilNativo(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama, venenoso, tipo_veneno, uf_origem, autorizacao);
            animais[RepNat->get_id()] = make_pair(NATIVO, RepNat);
            //delete RepNat;
        } else if (tipo == EXOTICO){
            string pais_origem;
            *ss >> pais_origem;

            ReptilExotico *RepExo = new ReptilExotico(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama, venenoso, tipo_veneno, pais_origem);
            animais[RepExo->get_id()] = make_pair(EXOTICO, RepExo);
            //delete RepExo;
        } else {
            return false;
        }
    } else if (classe == "Ave"){
        double tamanho_do_bico_cm; /**< Tamanho do bico do animal em cm */
        double envergadora_das_asas; /**< Envergadura das asas em cm do animal.*/

        *ss >> tamanho_do_bico_cm;
        *ss >> envergadora_das_asas;

        if (tipo == NATIVO){
            string uf_origem; /**< UF de origem do animal.*/
            string autorizacao; /**< Autorização do animal*/

            *ss >> uf_origem;
            ss->ignore();
            getline(*ss, autorizacao);
            //*ss >> autorizacao;

            AveNativo *AveNat = new AveNativo(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama, tamanho_do_bico_cm, envergadora_das_asas, uf_origem, autorizacao);
            animais[AveNat->get_id()] = make_pair(NATIVO, AveNat);
            //elete AveNat;
        } else if (tipo == EXOTICO){
            string pais_origem;
            *ss >> pais_origem;

            AveExotico *AveExo = new AveExotico(classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo, autorizacao_ibama,  tamanho_do_bico_cm, envergadora_das_asas, pais_origem);
            animais[AveExo->get_id()] = make_pair(EXOTICO, AveExo);
            //delete AveExo;
        } else {
            return false;
        }
    } else {
        return false;
    }    

    return true;
}

bool PetFera::RemoverAnimal(int id){
    if(animais.find(id) != animais.end()){
        animais.erase(id);
        return true;
    }
    else
        return false;    
}

string PetFera::ConsultaAnimal(short tipo_cunsulta, int id, string classe){
    stringstream out;

    if (tipo_cunsulta == 0){
        if(animais.find(id) != animais.end()){
            int tipo = animais[id].first;
            string classe = animais[id].second->get_classe();

            out << "" + to_string(animais[id].second->get_id()) + '\t' << animais[id].second->get_classe() + '\t' + animais[id].second->get_nome_cientifico() + '\t' + animais[id].second->get_sexo() + '\t' + to_string(animais[id].second->get_tamanho()) + '\t' + animais[id].second->get_dieta() + '\t' + to_string( animais[id].second->get_id_veterinario()) + '\t' + to_string(animais[id].second->get_id_tratador()) + '\t' + animais[id].second->get_nome_batismo() + '\t';

            if (classe == "Anfíbio"){
                if (tipo == NATIVO){
                    AnfibioNativo *obj = new AnfibioNativo();
                    obj = (AnfibioNativo*)animais[id].second;

                    //out /* << obj->get_autorizacao_ibama()*/ << '\t' << obj->get_total_de_mudas() << '\t' << obj->get_ultima_muda() << '\t' /*<< obj->get_uf_origem() << '\t' << obj->get_autorizacao() << '\t'*/;
                    out <<  "" + obj->get_autorizacao_ibama()  + to_string(obj->get_total_de_mudas()) + '\t' + obj->get_ultima_muda() + '\t';
                } else if (tipo == EXOTICO){
                    AnfibioExotico *obj = new AnfibioExotico();
                    obj = (AnfibioExotico*)animais[id].second;

                    //out /* << obj->get_autorizacao_ibama()*/ << '\t' << obj->get_total_de_mudas() << '\t' << obj->get_ultima_muda() << '\t' /*<< obj->get_uf_origem() << '\t' << obj->get_autorizacao() << '\t'*/;
                    out <<  "" + to_string(obj->get_total_de_mudas()) + '\t' + obj->get_ultima_muda() + '\t';
                }
            }

            return out.str();
        }
    } else if (tipo_cunsulta == 1){
        for (map <int, pair<int, Animal*> >::iterator e = animais.begin(); e != animais.end(); e++){
            if (e->second.second->get_classe() == classe){
                id = e->second.second->get_id();
                int tipo = animais[id].first;
                string classe = animais[id].second->get_classe();

                out << "" + to_string(animais[id].second->get_id()) + '\t' << animais[id].second->get_classe() + '\t' + animais[id].second->get_nome_cientifico() + '\t' + animais[id].second->get_sexo() + '\t' + to_string(animais[id].second->get_tamanho()) + '\t' + animais[id].second->get_dieta() + '\t' + to_string( animais[id].second->get_id_veterinario()) + '\t' + to_string(animais[id].second->get_id_tratador()) + '\t' + animais[id].second->get_nome_batismo() + '\t';

                if (classe == "Anfíbio"){
                    if (tipo == NATIVO){
                        AnfibioNativo *obj = new AnfibioNativo();
                        obj = (AnfibioNativo*)animais[id].second;

                        //out /* << obj->get_autorizacao_ibama()*/ << '\t' << obj->get_total_de_mudas() << '\t' << obj->get_ultima_muda() << '\t' /*<< obj->get_uf_origem() << '\t' << obj->get_autorizacao() << '\t'*/;
                        out <<  "" + to_string(obj->get_total_de_mudas()) + '\t' + obj->get_ultima_muda() + '\t';
                    }
                }

                out << '\n';
            }
        }
        return out.str();
    }

    //out.setstate(ios_base::failbit);
    return out.str();
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