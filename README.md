PARTE I

Cadastro de um novo animal a ser comercializado;
Remoção de um animal da lista após a sua comercialização;
Alteração dos dados cadastrais de um animal;
Consulta aos dados cadastrais de um determinado animal ou por uma classe de animais;
Consulta de animais sob a responsabilidade de um determinado Veterinário ou Tratador;
Todas as atividades relacionadas ao cadastro de Veterinários e Tratadores.


Desenvolver um programa em C++ para controlar o cadastro de animais silvestres da Pet Fera, segundo as características descritas.


Uso os conceitos e boas práticas de Programação Orientação a Objetos.

Utilizar o Tipo Abstrato de Dados MAP para manter a lista de animais cadastrados, bem como possivelmente as listas de veterinários e tratadores.

programa deverá persistir em arquivo (manter em arquivo os dados processados). Sempre que o programa iniciar o mesmo deverá carregar os dados (se existirem) presentes nos arquivos correspondentes.

O programa deverá utilizar como entrada dois arquivos no formato CSV (Comma-Separated Values), um com os dados básicos dos animais a serem cadastrados e outro com os dados dos funcionários (veterinários e tratadores).


PARTE II

Organize o seu modelo de classes em uma biblioteca dinâmica de nome petfera.so (Linux) ou petfera.dll (Windows).

Utilizando a biblioteca criada no item anterior, implemente um programa auxiliar para permitir exportar apenas dados de animais que satisfaçam a um determinado conjunto de critérios.

./exportar -c <classe> -v <veterinario> -t <tratador> <arquivo_saida>

Sintaxe:
-c <classe>: este argumento opcional indica a classe de animais a serem exportados. Por raz�es de simplicidade, deverá ser indicada apenas uma classe;
-v <veterinario>: este argumento opcional indica que apenas animais sob a responsabilidade do veterinário informado devem ser exportados. Por razões de simplicidade, deverá ser indicado apenas um nome de veterinário.
-t <tratador>: este argumento opcional indica que apenas animais tratados pelo tratador informado devem ser exportados. Por razões de simplicidade, deverá ser indicado apenas um tratador.
<arquivo_saida>: este argumento obrigatório indica o nome do arquivo de saída, ou seja, do arquivo onde serão guardados os dados a serem exportados. O formato do arquivo de exportação deve seguir o mesmo formato indicado na Tabela 1 do documento que descreve o Projeto de Programação II.

Realize o devido tratamento de exceções para as operações de manipulação de arquivos e para a entrada (leitura) de dados por meio da criação das classes de exceção necessárias e lançamento dos respectivos objetos quando for o caso.