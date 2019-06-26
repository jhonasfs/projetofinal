#include <iostream>
#include <string>
#include <sstream>

#include "../include/gerenciapetfera.h"
#include "../../petfera/include/petfera.h"
//#include "../../petfera/lib/petfera.a"

using namespace std;

void GerenciaPetFera::menu(){
    string classes[] = {"", "Anfíbio", "Mamífero", "Reptil", "Ave"};
    int op1, op2, op3;

    cout << "**************** SISTEMA PETFERA ****************" << endl;
    cout << "**************** SEJA BEM-VINDO  ****************" << endl;
    cout << endl;

    do{
        cout << "\n***** MENU PRINCIPAL *****" << endl;
        cout << "1 - Gerennciar Animais;\n2 - Gerenciar Funcionário;\n0 - Sair;" << endl;
        cout << "DIGITE A OPÇÃO DESEJADA:";
        cin >> op1;

        switch (op1){
        case 1: //1 - Gerennciar Animais;
            do {
                cout << "\n***** GERENCIAR ANIMAIS *****" << endl;
                cout << "1 - Casdastrar Animal;\n2 - Alterar Animal;\n3 - Remover Animal;\n4 - Consulta animal por ID;\n5 - Consulta animais por classe;\n6 - Consulta animais por funcionário (Veterinário ou Tratador);\n0 - Sair;" << endl;
                cout << "DIGITE A OPÇÃO DESEJADA:";
                cin >> op2;

                switch (op2){
                case 1:
                    //1 - Casdastrar Animal;
                    cadastroAnimal();
                    break;
                
                case 2:
                    //2 - Alterar Animal;
                    alterarcaoAnimal();
                    break;

                case 3:
                    //3 - Remover Animal;
                    cout << "REMOVER ANIMAL:" << endl;
                    int id;
                    cout << "Digite o ID do animal a ser removido: ";
                    cin >> id;
                    if (petfera->RemoverAnimal(id)){
                        cout << "ANIMAL REMOVIDO COM SUCESSO!!!" << endl;
                    } else {
                        cout << "ERRO NA REMOÇÃO. VERIFIQUE AS INFORMAÇÕES!!!" << endl;
                    }
                    break;
                
                case 4:
                    //4 - Consulta animal por ID;
                    cout << "CONSULTA ANIMAL POR ID:" << endl;
                    //int id;
                    cout << "Digite o ID do animal a ser consultado: ";
                    cin >> id;
                    cout << "Dados do animal:" << endl;
                    cout << petfera->ConsultarAnimal(0, id, "") << endl;
                    cout << endl;
                    break;
                case 5:                    
                    //5 - Consulta animais por classe;
                    cout << "CONSULTA ANIMAIS POR CLASSE:" << endl;
                    int opl;
                    
                    
                    do {
                        cout << "\nDigite classe a ser consultada:\n1 - Anfíbio;\n2 - Mamífero;\n3 - Reptil;\n4 - Ave;\n0 - Sair;" << endl;
                        cin >> opl;
                        if (opl != 0){
                            cout << petfera->ConsultarAnimal(1, 0, classes[opl]);
                            cout << endl;
                        } else {
                            cout << "Opção inválida!!!" << endl;
                        }
                    }while(opl != 0);                    
                    break;
                case 6:
                    //6 - Consulta animais por funcionário (Veterinário ou Tratador);
                    cout << "CONSULTA ANIMAL POR FUNCIONÁRIO:" << endl;
                    //int id;
                    cout << "Digite o ID funcionário: ";
                    cin >> id;
                    cout << "Dados dos animais:\n" << endl;
                    cout << petfera->ConsultarAnimal_Vet_Trat(0, id) << endl;
                    cout << endl;                    
                    break;
                case 0:
                    // 0 - Sair;
                    cout << "Saindo..." << endl;
                    break;                    
                default:                    
                    cout << "OPÇÃO INVÁLIDA!!!" << endl;
                    break;
                }

            }while (op2 != 0);
            break;
        case 2:
            //2 - Gerenciar Funcionário;
            do {
                cout << "\n***** GERENCIAR FUNCIONÁRIOS *****" << endl;
                cout << "1 - Cadastrar Funcionario;\n2 - Listar Funcionários;\n3 - Consultar Funcionário;\n0 - Sair;" << endl;
                cout << "DIGITE A OPÇÃO DESEJADA:";
                cin >> op3;

                switch (op3){
                case 1:
                    //1 - Cadastrar Funcionario;
                    cadastroFuncionario();
                    break;
                case 2:
                    //2 - Listar Funcionários;
                    cout << "LISTAR FUNCIONÁRIOS:" << endl;
                    cout << "Dados do Funcionarios:" << endl;
                    cout << petfera->ConsultaFuncionario(0) << endl;
                    cout << endl;
                    break;
                case 3:
                    //3 - Consultar Funcionário;
                    cout << "CONSULTAR FUNCIONÁRIO:" << endl;
                    int id;
                    cout << "Digite o ID do funcionário a ser consultado: ";
                    cin >> id;
                    cout << "Dados do Funcionario:" << endl;
                    cout << petfera->ConsultaFuncionario(id) << endl;
                    cout << endl;                    
                    break;
                case 0:
                    cout << "Saindo..." << endl;
                    break;
                default:
                    cout << "OPÇÃO INVALIDA!!!" << endl;
                    break;
                }                
            }while(op3 != 0);
            break;
        default:
            cout << "ENCERRANDO SISTEMA!!!" << endl;
            petfera->~PetFera();
            break;
        }
    }while(op1 != 0);

}

void GerenciaPetFera::cadastroAnimal(){
    string classes[] = {"", "Anfíbio", "Mamífero", "Reptil", "Ave"};
    stringstream ss;
    int tipo = 0;
   
    string classe;  /**< Classe do animal: Amphibia (anfíbio), ​ Reptilia (réptil), ​ Aves (ave), Mammalia ​ (mamífero)*/
    string nome_cientifico; /**< Nome científico do animal.*/
    char sexo;  /**< Sexo (M (macho), F (fêmea)) do animal.*/
    double tamanho; /**< Tamanho médio em metros do animal.*/
    string dieta;   /**< Dieta alimenticia do animal do animal.*/
    int id_veterinario; /**< Identificador do veterinário responsável pelo animal.*/
    int id_tratador;     /**< Identificador do tratador responsável pelo animal.*/
    string nome_batismo;     /**< Nome de batismo do animal.*/
    string autorizacao_ibama; /**< Autorização do IBAMA para portar o animal.*/

    cout << "CADASTRO ANIMAL: " << endl;

    do{
        cout << "Digite o tipo de animal:\n1 - Nativo;\n2 - Exotico;\n0 - Sair;" << endl;
        cout << "-> ";
        cin >> tipo;

        if (tipo < 0 || tipo > 2)
            cout << "Digite novamente!!!" << endl;

    }while(tipo < 0 || tipo > 2);

    if (tipo == 0)
        return;

    tipo = tipo - 1;

    int opl;
    do {
        cout << "\nDigite a classe:\n1 - Anfíbio;\n2 - Mamífero;\n3 - Reptil;\n4 - Ave;\n0 - Sair;" << endl;
        cin >> opl;
        if (opl != 0){
            classe = classes[opl];
        } else if (tipo < 0 || tipo > 4) {
            cout << "Opção inválida!!!" << endl;
        }
    }while(tipo < 0 || tipo > 4); 

    if (opl == 0)
        return;
    
    cout << "\nDigite o nome cientifico: ";
    cin >> nome_cientifico;

    do {
    cout << "Digite o sexo - \nM - MACHO;\nF - FEMEA\nS- SAIR;\n-> ";
    cin >> sexo;
    if (sexo != 'M' && sexo != 'F' && sexo != 'S')
        cout << "Opção invalida!!!" << endl;
    }while(sexo != 'M' && sexo != 'F');
    
    if(sexo == 'S')
        return;
    
    cout << "\nDigite o tamanho do aninal: ";
    cin >> tamanho;

    cout << "\nDigite dieta do animal: ";
    cin >> dieta;

    cout << "\nDigite o ID do veterinario: ";
    cin >> id_veterinario;
    cout << "\nDigite o ID do tratador: ";
    cin >> id_tratador;

    cout << "\nDigite o nome de batismo: ";
    cin >> nome_batismo;

    ss << "" << tipo << '\n' << classe << '\n' + nome_cientifico << '\n' << sexo << '\n' << tamanho  << '\n' << dieta  << '\n' << id_veterinario << '\n' << id_tratador  << '\n' << nome_batismo  << '\n' << autorizacao_ibama  << '\n';

    if (opl == 1){
        int total_de_mudas; /**< Total de mudas do animal.*/
        string ultima_muda; /**< Data da última muda do animal.*/

        cout << "\nDigite o total de mudas: ";
        cin >> total_de_mudas;

        cout << "\nDigite data da última muda (DD/MM/AAAA): ";
        cin >> ultima_muda;

        ss << total_de_mudas << '\n' << ultima_muda << '\n';
    } else if (opl == 2){
        string cor_pelo; /**< Cor do pelo do animal.*/
        cout << "\nDigite a cor do pelo: ";
        cin >> cor_pelo;

        ss << cor_pelo << '\n';
    } else if (opl == 3){
        bool venenoso; /**< Animal venenoso ou não.*/
        string tipo_veneno; /**< Tipo do veneno do animal.*/

        cout << "\nAnimal venenoso (1 - SIM; 0 - NÃO):";
        cin >> venenoso;

        cout << "\nAnimal tipo veneno: ";
        cin >> tipo_veneno;

        ss << venenoso << '\n' << tipo_veneno << '\n';
    } else if (opl == 4){
        double tamanho_do_bico_cm; /**< Tamanho do bico do animal em cm */
        double envergadora_das_asas; /**< Envergadura das asas em cm do animal.*/

        cout << "\nTamanho do bico em cm:";
        cin >> tamanho_do_bico_cm;

        cout << "\nEnvergadura das asas: ";
        cin >> envergadora_das_asas;

        ss << tamanho_do_bico_cm << '\n' << envergadora_das_asas << '\n';
    }

    if (tipo == 0){
        string uf_origem; /**< UF de origem do animal.*/
        string autorizacao; /**< Autorização do animal*/

        cout << "\nUF de ogigem: ";
        cin >> uf_origem;

        cout << "\nAutorização: ";
        cin >> autorizacao;

        ss << uf_origem << '\n' << autorizacao << '\n';
    } else if (tipo == 1){
        string pais_origem;

        cout << "\nPais de origem:: ";
        cin >> pais_origem;

        ss << pais_origem << '\n';
    }

    petfera->CadastrarAnimal(&ss, 0);

}

void GerenciaPetFera::cadastroFuncionario(){
    string nome;  /**< Nome completo do funcionário.*/
    string cpf;   /**< CPF do funcionário.*/
    short idade;  /**< Idade do funcionário.*/
    short tipo_sanguineo;   /**< Tipo sanguineo (A, B, AB​, O) do funcionário.*/
    char fator_rh;    /**< Fator RH (+, -) do funcionário.*/
    string especialidade; /**< Especialidade do funcionário.*/

    int tipo;

    stringstream ss;

    do{
        cout << "Digite o tipo de funcionario:\n1 - Veterinario;\n2 - Tratador;\n0 - Sair;" << endl;
        cout << "-> ";
        cin >> tipo;

        if (tipo < 0 || tipo > 2)
            cout << "Digite novamente!!!" << endl;

    }while(tipo < 0 || tipo > 2);

    if (tipo == 0)
        return;

    tipo = tipo - 1;

    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Digite o cpf: ";
    cin >> cpf;

    cout << "Digite a idade: ";
    cin >> idade;

    do {
    cout << "Digite o tipo sanguineo - \n1 - A;\n2 - B\n3 - AB\n4 - O\n0- SAIR;\n-> ";
    cin >> tipo_sanguineo;
    if (tipo_sanguineo < 0 && tipo_sanguineo > 4)
        cout << "Opção invalida!!!" << endl;
    }while(tipo_sanguineo < 0 && tipo_sanguineo > 4);
    
    if(tipo_sanguineo == 0)
        return;

    tipo_sanguineo = tipo_sanguineo - 1;

    cout << "Digite Fator RH (+ ou -): ";
    cin >> fator_rh;

    cout << "Digite a especialidade: ";
    cin.ignore();
    getline(cin, especialidade);

    ss << tipo << '\n' << nome << '\n' << cpf << '\n' << idade  << '\n' << tipo_sanguineo << '\n' << fator_rh << '\n' << especialidade << '\n';

    if (tipo == 0){
        string crmv;
        cout << "Digite o CRMV: ";
        cin >> crmv;

        ss << crmv << '\n';
    } else if (tipo == 1){
        int nivel_de_seguranca;
        cout << "Digite o nivel de segurança: ";
        cin >> nivel_de_seguranca;

        ss << nivel_de_seguranca << '\n';
    }

    petfera->CadastrarFuncionario(&ss, 0);
}

void GerenciaPetFera::alterarcaoAnimal(){
    cout << "Alteração!!!" << endl;
}