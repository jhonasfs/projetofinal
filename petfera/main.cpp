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

    ss << 1 << ' ' << "nome sobrenome" << '\n' << "cpf" << ' ' << 20 << ' ' << O << ' ' << '+' << ' ' << "especialidade" << ' ' << 1;

    std::cout << ss.str() << std::endl;

    std::cout << petfera->cadastroFuncionario(&ss) << std::endl;    

    ss.clear();
    ss.seekp(0);
    ss.seekg(0);

    ss << 0 << ' ' << "nome1" << '\n' << "cpf1" << ' ' << 25 << ' ' << 2 << ' ' << '-' << ' ' << "especialidade2" << ' ' << "000/RN";

    std::cout << ss.str() << std::endl;

    std::cout << petfera->cadastroFuncionario(&ss) << std::endl;

    return 0;

    
}
