#include <iostream>
#include <string>
#include <fstream>

#include "../petfera/include/petfera.h"

using namespace std;

int main(int argc,char* argv[]){

    PetFera *petfera = new PetFera("./arquivos/animais.csv", "./arquivos/funcionarios.csv");

    int id_vet = 0, id_ttd = 0;
    string classe = "", saida = "", caminho = "";

    fstream arqSaida;



    if(argc > 1){
        for (int c = 1; c < argc; c++){
            if(argv[c] == "-c"){
                classe = argv[++c];
            } else if(argv[c] == "-v"){
                id_vet = stoi(argv[++c]);
            } else if(argv[c] == "-t"){
                id_ttd = stoi(argv[++c]);
            }
        }

        if ( classe != "" || id_vet != 0 || id_ttd != 0){
            saida = petfera->ConsultarAnimalGeral(classe,id_vet,id_ttd);

            if(saida != ""){
                caminho = argv[sizeof(argv)-1];
                
                arqSaida.open(caminho, ios::out);                
    
                if(arqSaida.is_open()){
                    arqSaida << saida;
                    arqSaida.close();
                } else {
                    cout << "Não foi possível criar o arquivo de saida. Vefique os argumentos passados!" << endl;
                }

            } else {
                cout << "Nenhum resultado encontrado para as opções de entada!!!" << endl;
            }

        } else {
            cout << "ERRO. Vefique os argumentos!!!" << endl;
        }
    } else {
        cout << "NENHUM ARGUMENTO INFORMADO!!!" << endl;
    }   

    return 0;
}

