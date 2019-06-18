PARTE I

Cadastro de um novo animal a ser comercializado;
Remo��o de um animal da lista ap�s a sua comercializa��o;
Altera��o dos dados cadastrais de um animal;
Consulta aos dados cadastrais de um determinado animal ou por uma classe de animais;
Consulta de animais sob a responsabilidade de um determinado Veterin�rio ou Tratador;
Todas as atividades relacionadas ao cadastro de Veterin�rios e Tratadores.


Desenvolver um programa em C++ para controlar o cadastro de animais silvestres da Pet Fera, segundo as caracter�sticas descritas.


Uso os conceitos e boas pr�ticas de Programa��o Orienta��o a Objetos.

Utilizar o Tipo Abstrato de Dados MAP para manter a lista de animais cadastrados, bem como possivelmente as listas de veterin�rios e tratadores.

programa dever� persistir em arquivo (manter em arquivo os dados processados). Sempre que o programa iniciar o mesmo dever� carregar os dados (se existirem) presentes nos arquivos correspondentes.

O programa dever� utilizar como entrada dois arquivos no formato CSV (Comma-Separated Values), um com os dados b�sicos dos animais a serem cadastrados e outro com os dados dos funcion�rios (veterin�rios e tratadores).


PARTE II

Organize o seu modelo de classes em uma biblioteca din�mica de nome petfera.so (Linux) ou petfera.dll (Windows).

Utilizando a biblioteca criada no item anterior, implemente um programa auxiliar para permitir exportar apenas dados de animais que satisfa�am a um determinado conjunto de crit�rios.

./exportar -c <classe> -v <veterinario> -t <tratador> <arquivo_saida>

Sintaxe:
-c <classe>: este argumento opcional indica a classe de animais a serem exportados. Por raz�es de simplicidade, dever� ser indicada apenas uma classe;
-v <veterinario>: este argumento opcional indica que apenas animais sob a responsabilidade do veterin�rio informado devem ser exportados. Por raz�es de simplicidade, dever� ser indicado apenas um nome de veterin�rio.
-t <tratador>: este argumento opcional indica que apenas animais tratados pelo tratador informado devem ser exportados. Por raz�es de simplicidade, dever� ser indicado apenas um tratador.
<arquivo_saida>: este argumento obrigat�rio indica o nome do arquivo de sa�da, ou seja, do arquivo onde ser�o guardados os dados a serem exportados. O formato do arquivo de exporta��o deve seguir o mesmo formato indicado na Tabela 1 do documento que descreve o Projeto de Programa��o II.

Realize o devido tratamento de exce��es para as opera��es de manipula��o de arquivos e para a entrada (leitura) de dados por meio da cria��o das classes de exce��o necess�rias e lan�amento dos respectivos objetos quando for o caso.
s