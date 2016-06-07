// Adicionando bibliotecas
#include <iostream>
#include <ctime> // Biblioteca incluida para usar o tempo
using namespace std;

void imprimir_espacos(int rodada); // Nomeando a variável 
int main() // Função principal do jogo
{
	int total_espacos = 50; // Variável utilizada para definir os espaços (tamanho) da pista de corrida
	int espacos_1 = 0; // Definindo o valor inicial de espaços percorridos pelo jogador 1
	int espacos_2 = 0; // Definindo o valor inicial de espaços percorridos pelo jogador 2
	
	while (espacos_1 < total_espacos && espacos_2 < total_espacos) // Laço de repetição utilizado enquanto o espaço total for maior que o espaço percorrido pelos dois jogadores
	{
		system("cls"); // Comando para limpar a tela
		cout << "Need for speed" << endl; // Imprime uma mensagem na tela
		cout << "                                                Chegada!" << endl; // Imprime a mensagem na tela indicando a chegada

		srand((int)time(0)); // Usa o tempo atual para sortear um número aleatório

		espacos_1 = rand() % 3 + 1 + espacos_1; // Gera um número aleatório para ser pecorrido pelo jogador 1
		imprimir_espacos(espacos_1); // Imprime os espaços do jogador 1
		// Imprime o carrinho do jogador 1
		cout << "  _  " << endl;
		imprimir_espacos(espacos_1); 
		cout << "-o-o>" << endl;

		espacos_2 = rand() % 3 + 1 + espacos_2; // Gera um número aleatório para ser pecorrido pelo jogador 2
		imprimir_espacos(espacos_2); // Imprime os espaços do jogador 2
		// Imprime o carrinho do jogador 2
		cout << "  _  " << endl;
		imprimir_espacos(espacos_2);
		cout << "-o-o>" << endl;
	}
	if (espacos_1 > espacos_2) cout << "Carro 1 venceu a corrida!" << endl; // Se o jogador 1 percorrer mais espaços que o 2, imprimi-se a mensagem indicando que o jogador 1 venceu
	else if (espacos_2 > espacos_1) cout << "Carro 2 venceu a corrida!" << endl; // Se então jogador 2 percorrer mais espaços que o 1, imprimi-se a mensagem indicando que o jogador 2 venceu
	else cout << "Empate!" << endl; // Se não, imprimi-se que deu empate
	return 0; // O programa se encerra quando este comando é executado.
}

void imprimir_espacos(int rodada) // Cria-se uma nova função do tipo void. Ela é responsável por imprimir os espaços
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++) // Laço for, pois sabemos o quanto ele deve se repetir.
	{
		cout << " "; // imprimi-se o espaço correspondentes a pista a ser percorrida
	}
}
