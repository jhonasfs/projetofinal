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

bool PetFera::CadastrarAnimal(stringstream *ss){
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

bool PetFera::AlterarAnimal(int id, map< string, string > dados){
    if (animais.find(id) == animais.end())
        return false;

    int tipo = animais[id].first;
    string classe = animais[id].second->get_classe();

    for (auto e: dados){
        if(e.first == "classe"){
            animais[id].second->set_classe(e.second);
        } else if(e.first == "nome cientifco"){
            animais[id].second->set_nome_cientifico(e.second);
        } else if(e.first == "sexo"){
            animais[id].second->set_sexo(e.second[0]);
        } else if(e.first == "tamanho"){
            animais[id].second->set_tamanho(stod(e.second));
        } else if(e.first == "dieta"){
            animais[id].second->set_dieta(e.second);
        } else if(e.first == "veterinario"){
            animais[id].second->set_id_veterinario(stoi(e.second));
        } else if(e.first == "tratador"){
            animais[id].second->set_id_tratador(stoi(e.second));
        } else if(e.first == "nome batismo"){
            animais[id].second->set_nome_batismo(e.second);
        } 
        
        
        else if (classe == "Anfíbio"){
            if (tipo == 0){
                AnfibioNativo *obj = new AnfibioNativo();
                obj = (AnfibioNativo*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "total mudas"){
                    obj->set_total_de_mudas(stoi(e.second));
                } else if (e.first == "ultima muda"){
                    obj->set_ultima_muda(e.second);
                } else if (e.first == "uf origem"){
                    obj->set_uf_origem(e.second);
                } else if (e.first == "autorizacao"){
                    obj->set_autorizacao(e.second);
                }
                animais[id] = make_pair(tipo, obj);
            } else  if (tipo == 1){
                AnfibioExotico *obj = new AnfibioExotico();
                obj = (AnfibioExotico*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "total mudas"){
                    obj->set_total_de_mudas(stoi(e.second));
                } else if (e.first == "ultima muda"){
                    obj->set_ultima_muda(e.second);
                } else if (e.first == "pais origem"){
                    obj->set_pais_origem(e.second);
                }
                animais[id] = make_pair(tipo, obj);
            }
        }


        else if (classe == "Mamífero"){
            if (tipo == 0){
                MamiferoNativo *obj = new MamiferoNativo();
                obj = (MamiferoNativo*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "cor pelo"){
                    obj->set_cor_pelo(e.second);
                } else if (e.first == "uf origem"){
                    obj->set_uf_origem(e.second);
                } else if (e.first == "autorizacao"){
                    obj->set_autorizacao(e.second);
                }
                animais[id] = make_pair(tipo, obj);
            } else  if (tipo == 1){
                MamiferoExotico *obj = new MamiferoExotico();
                obj = (MamiferoExotico*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "cor pelo"){
                    obj->set_cor_pelo(e.second);
                } else if (e.first == "pais origem"){
                    obj->set_pais_origem(e.second);
                }
                animais[id] = make_pair(tipo, obj);
            }
        }

        else if (classe == "Reptil"){
            if (tipo == 0){
                ReptilNativo *obj = new ReptilNativo();
                obj = (ReptilNativo*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "venenoso"){
                    obj->set_venenoso(stoi(e.second));
                } else if (e.first == "tipo veneno"){
                    obj->set_tipo_veneno(e.second);
                } else if (e.first == "uf origem"){
                    obj->set_uf_origem(e.second);
                } else if (e.first == "autorizacao"){
                    obj->set_autorizacao(e.second);
                }
                animais[id] = make_pair(tipo, obj);
            } else  if (tipo == 1){
                ReptilExotico*obj = new ReptilExotico();
                obj = (ReptilExotico*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "venenoso"){
                    obj->set_venenoso(stoi(e.second));
                } else if (e.first == "tipo veneno"){
                    obj->set_tipo_veneno(e.second);
                } else if (e.first == "pais origem"){
                    obj->set_pais_origem(e.second);
                } 
                animais[id] = make_pair(tipo, obj);
            }
        }

        else if (classe == "Ave"){
            if (tipo == 0){
                AveNativo *obj = new AveNativo();
                obj = (AveNativo*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "tamanho bico"){
                    obj->set_tamanho_do_bico_cm(stod(e.second));
                } else if (e.first == "envergadura"){
                    obj->set_envergadora_das_asas(stod(e.second));
                } else if (e.first == "uf origem"){
                    obj->set_uf_origem(e.second);
                } else if (e.first == "autorizacao"){
                    obj->set_autorizacao(e.second);
                }
                animais[id] = make_pair(tipo, obj);
            } else  if (tipo == 1){
                AveExotico *obj = new AveExotico();
                obj = (AveExotico*) animais[id].second;
                if (e.first == "autorizacao ibama"){
                    obj->set_autorizacao_ibama(e.second);
                } else if (e.first == "tamanho bico"){
                    obj->set_tamanho_do_bico_cm(stod(e.second));
                } else if (e.first == "envergadura"){
                    obj->set_envergadora_das_asas(stod(e.second));
                } else if (e.first == "pais origem"){
                    obj->set_pais_origem(e.second);
                } 
                animais[id] = make_pair(tipo, obj);
            }
        }
    }

    return true;
}

string PetFera::ConsultarAnimal(short tipo_cunsulta, int id, string classe){
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

                    out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_total_de_mudas()) + '\t' + obj->get_ultima_muda() + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                } else if (tipo == EXOTICO){
                    AnfibioExotico *obj = new AnfibioExotico();
                    obj = (AnfibioExotico*)animais[id].second;

                    out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_total_de_mudas()) + '\t' + obj->get_ultima_muda() + '\t' + obj->get_pais_origem();

                }
            } else if (classe == "Mamífero"){
                if (tipo == NATIVO){
                    MamiferoNativo *obj = new MamiferoNativo();
                    obj = (MamiferoNativo*)animais[id].second;

                    out <<  "" + obj->get_autorizacao_ibama() + obj->get_cor_pelo() + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                } else if (tipo == EXOTICO){
                    MamiferoExotico *obj = new MamiferoExotico();
                    obj = (MamiferoExotico*)animais[id].second;

                    out <<  "" + obj->get_autorizacao_ibama() + obj->get_cor_pelo() + '\t' + obj->get_pais_origem();

                }
            } else if (classe == "Repil"){
                if (tipo == NATIVO){
                    ReptilNativo *obj = new ReptilNativo();
                    obj = (ReptilNativo*)animais[id].second;

                    out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_venenoso()) + '\t' + obj->get_tipo_veneno() + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                } else if (tipo == EXOTICO){
                    ReptilExotico *obj = new ReptilExotico();
                    obj = (ReptilExotico*)animais[id].second;

                    out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_venenoso()) + '\t' + obj->get_tipo_veneno() + '\t' + obj->get_pais_origem();

                }
            } else if (classe == "Ave"){
                if (tipo == NATIVO){
                    AveNativo *obj = new AveNativo();
                    obj = (AveNativo*)animais[id].second;

                    out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_tamanho_do_bico_cm()) + '\t' + to_string(obj->get_envergadora_das_asas()) + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                } else if (tipo == EXOTICO){
                    AveExotico *obj = new AveExotico();
                    obj = (AveExotico*)animais[id].second;

                    out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_tamanho_do_bico_cm()) + '\t' + to_string(obj->get_envergadora_das_asas()) + '\t' + obj->get_pais_origem();

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

                        out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_total_de_mudas()) + '\t' + obj->get_ultima_muda() + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                    } else if (tipo == EXOTICO){
                        AnfibioExotico *obj = new AnfibioExotico();
                        obj = (AnfibioExotico*)animais[id].second;

                        out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_total_de_mudas()) + '\t' + obj->get_ultima_muda() + '\t' + obj->get_pais_origem();

                    }
                } else if (classe == "Mamífero"){
                    if (tipo == NATIVO){
                        MamiferoNativo *obj = new MamiferoNativo();
                        obj = (MamiferoNativo*)animais[id].second;

                        out <<  "" + obj->get_autorizacao_ibama() + obj->get_cor_pelo() + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                    } else if (tipo == EXOTICO){
                        MamiferoExotico *obj = new MamiferoExotico();
                        obj = (MamiferoExotico*)animais[id].second;

                        out <<  "" + obj->get_autorizacao_ibama() + obj->get_cor_pelo() + '\t' + obj->get_pais_origem();

                    }
                } else if (classe == "Repil"){
                    if (tipo == NATIVO){
                        ReptilNativo *obj = new ReptilNativo();
                        obj = (ReptilNativo*)animais[id].second;

                        out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_venenoso()) + '\t' + obj->get_tipo_veneno() + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                    } else if (tipo == EXOTICO){
                        ReptilExotico *obj = new ReptilExotico();
                        obj = (ReptilExotico*)animais[id].second;

                        out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_venenoso()) + '\t' + obj->get_tipo_veneno() + '\t' + obj->get_pais_origem();

                    }
                } else if (classe == "Ave"){
                    if (tipo == NATIVO){
                        AveNativo *obj = new AveNativo();
                        obj = (AveNativo*)animais[id].second;

                        out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_tamanho_do_bico_cm()) + '\t' + to_string(obj->get_envergadora_das_asas()) + '\t' + obj->get_uf_origem() + '\t' + obj->get_autorizacao();

                    } else if (tipo == EXOTICO){
                        AveExotico *obj = new AveExotico();
                        obj = (AveExotico*)animais[id].second;

                        out <<  "" + obj->get_autorizacao_ibama() + to_string(obj->get_tamanho_do_bico_cm()) + '\t' + to_string(obj->get_envergadora_das_asas()) + '\t' + obj->get_pais_origem();

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

string PetFera::ConsultarAnimal_Vet_Trat(short tipo_cunsulta, int id){
    stringstream out;
    //if (funcionarios.find(id) != funcionarios.end()){
    if(true){
        for (map <int, pair<int, Animal*> >::iterator e = animais.begin(); e != animais.end(); e++){
            if ( (tipo_cunsulta == 0 && e->second.second->get_id_veterinario() == id) || (tipo_cunsulta == 1 && e->second.second->get_id_tratador() == id)){
                out << "" + to_string(e->second.second->get_id()) + '\t' + e->second.second->get_classe() + '\t' + e->second.second->get_nome_cientifico() + '\t' + e->second.second->get_sexo() + '\t' + to_string(e->second.second->get_tamanho()) + '\t' + e->second.second->get_dieta() + '\t' + to_string(e->second.second->get_id_veterinario()) + '\t' + to_string(e->second.second->get_id_tratador()) + '\t' + e->second.second->get_nome_batismo() + '\n';
            }
        }
    } else {
        out << "falha";
    }

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