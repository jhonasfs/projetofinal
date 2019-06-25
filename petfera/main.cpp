#include <iostream>
#include <string>

#include <sstream>

#include "./include/petfera.h"

#define A 0
#define B 1
#define AB 2
#define O 3

int main(){
    PetFera *petfera = new PetFera();

    stringstream ss;    

    //Anfibio Nativo
    ss << 0 << '\n' << "Anfíbio"  << '\n' <<  "Nome Cientifico" << '\n' << "M"  << '\n' << 10  << '\n' << "Dieta Dieta"  << '\n' << 1  << '\n' << 2 << '\n' << "Nome Batismo" << '\n';
    ss << "Autorização Ibama"  << '\n' << 10  << '\n' << "10-10-2010" << '\n' << "RN" << '\n' << "Autorização 2" << '\n';

    std::cout << ss.str() << std::endl;

    std::cout << petfera->CadastrarAnimal(&ss) << std::endl;

    cout << endl;

    // ss.clear();
    // ss.seekp(0);
    // ss.seekg(0);

    // ss << 0 << "Anfíbio"  << '\n' <<  "Nome Cientifico 2" << '\n' << "M"  << '\n' << 10  << '\n' << "Dieta Dieta"  << '\n' << 1  << '\n' << 2 << '\n' << "Nome Batismo 2" << '\n';
    // ss << "Autorização Ibama"  << '\n' << 10  << '\n' << "10/10/2010" << '\n' << "Brasil" << '\n';

    // std::cout << ss.str() << std::endl;

    // std::cout << petfera->cadastrarAnimal(&ss) << std::endl;

    // cout << endl;

    // ss.clear();
    // ss.seekp(0);
    // ss.seekg(0);

    // ss << 1 << "Anfíbio"  << '\n' <<  "Nome Cientifico 2" << '\n' << "M"  << '\n' << 10  << '\n' << "Dieta Dieta"  << '\n' << 1  << '\n' << 2 << '\n' << "Nome Batismo 2" << '\n';
    // ss << "Autorização Ibama"  << '\n' << 10  << '\n' << "10/10/2010" << '\n' << "Brasil" << '\n';

    // std::cout << ss.str() << std::endl;

    // std::cout << petfera->cadastrarAnimal(&ss) << std::endl;

    // cout << endl;

    // //cout << petfera->RemoverAnimal(3) << endl;

    // cout << endl;

    // cout << petfera->ConsultaAnimal(0,1,"");
    // cout << endl;

    // cout << petfera->ConsultaAnimal(0,2,"");
    cout << endl;

    map<string, string> dados;    
    dados["sexo"] = "F";
    dados["tamanho"] = "50";
    dados["nome batismo"] = "Brutos";
    dados["autorizacao ibama"] = "Sem autorização!";
    dados["total mudas"] = "100";
    dados["uf origem"] = "PE";
    //dados["classe"] = "Mamífero";

    cout << petfera->AlterarAnimal(1,dados);

    cout << petfera->ConsultarAnimal(0,1,"");
    cout << endl;
    cout << petfera->ConsultarAnimal(1,1,"Anfíbio");
    cout << endl;

    
    
    cout << endl;



    cout << petfera->ConsultarAnimal_Vet_Trat(0, 1);
    cout << endl;
    cout << petfera->ConsultarAnimal_Vet_Trat(1, 2);

    // ss << 1 << ' ' << "nome sobrenome" << '\n' << "cpf" << ' ' << 20 << ' ' << O << ' ' << '+' << ' ' << "especialidade" << ' ' << 1;

    // std::cout << ss.str() << std::endl;

    // std::cout << petfera->cadastroFuncionario(&ss) << std::endl;    

    // ss.clear();
    // ss.seekp(0);
    // ss.seekg(0);

    // ss << 0 << ' ' << "nome1" << '\n' << "cpf1" << ' ' << 25 << ' ' << 2 << ' ' << '-' << ' ' << "especialidade2" << ' ' << "000/RN";

    // std::cout << ss.str() << std::endl;

    // std::cout << petfera->cadastroFuncionario(&ss) << std::endl;

    return 0;

    
}
