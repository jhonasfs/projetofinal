#ifndef GERENCIAPETFERA_H

#define GERENCIAPETFERA_H

#include "../../petfera/include/petfera.h"
//#include "../../petfera/lib/petfera.a"


class GerenciaPetFera{
    private:
        PetFera *petfera = new PetFera("./arquivos/animais.csv", "./arquivos/funcionarios.csv");

    public:
        void menu();

        void cadastroAnimal();

        void cadastroFuncionario();

        void alterarcaoAnimal();
};

#endif