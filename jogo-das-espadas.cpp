//adicionando bibliotecas
#include <iostream>
#include <string> // biblioteca específica para variável string
#include <ctime> // biblioteca para o tempo

using namespace std;

int main() // função principal
{
	// adicionando variáveis e atribuindo valores
	int Vida1 = 20, Vida2 = 20; // Representa a quantidade de vidas dos jogadores
	int dano1 = 0, dano2 = 0;   // Representa o valor do dano causado
	string P1, P2; // Varável para armazenar os nomes dos jogadores
	bool sair = false; // Varável utilizada para a condição do laço

	// Solicitando e armazenando o nome dos jogadores
	cout << "\aDigite o nome do player 1" << endl; // Imprime na tela uma mensagem pedindo que o jogador digite seu nome
	cin >> P1; // Salva o nome digitado na respectiva variável
	cout << "\aDigite o nome do player 2" << endl; // Imprime na tela uma mensagem pedindo que o jogador digite seu nome
	cin >> P2; // Salva o nome digitado na respectiva variável

	while (sair == false) // Laço de repetição utilizado enquanto a condição atender o que se pede
	{
		// Imprime na tela a forma dos lutadores. Informa também suas características como quantidade de vida. ataque e defesa
		cout << "-" << dano1 << "                   -" << dano2 << endl;
		cout << " o                   o  " << endl;
		cout << ".T./               \\.T." << endl;
		cout << " ^                   ^  " << endl;
		cout << P1 << "                " << P2 << endl;
		cout << "Vida: " << Vida1 << "         " << " Vida: " << Vida2 << endl;
		cout << "Atk: 2" << "         " << "Atk: 2" << endl;
		cout << "Def: 4" << "         " << "Def: 4" << endl;

		int dado6; // Cria-se uma nova variável para armazenar o valor sorteado pelo dado
		srand((int)time(0)); // Usa o tempo aual para gear números aleatórios

		dado6 = rand() % 6 + 1; // Através dessa expressão se sorteia um número aleatório
		dano1 = dado6 - 4; // A variável dano recebe o valor resultante para gerar o dano na vida do jogador 
		
		if (dado6 < 4) // Se o valor fo menor que 4, ocorrerá um determinado comando
		{
			dano1 = 0; // O dano recebido será 0
		}
		Vida1 = Vida1 - dano1; // Subtrai-se a vida do jogador 1 pelo dano gerado

		dado6 = rand() % 6 + 1; // Através dessa expressão se sorteia um número aleatório
		dano2 = dado6 - 4; // A variável dano recebe o valor resultante para gerar o dano na vida do jogador
		
		if (dado6 < 4) // Se o valor fo menor que 4, ocorrerá um determinado comando
		{
			dano2 = 0; // O dano recebido será 0
		}
		Vida2 = Vida2 - dano2; // Subtrai-se a vida do jogador 2 pelo dano gerado
		system("pause"); // Ocorre uma pausa para visualizar os jogadores na tela

		cout << "Vida: " << Vida1 << "         " << "Vida: " << Vida2 << endl; // Imprime a quantidade de vida atual dos jogadores

		if (Vida1 <= 0 || Vida2 <= 0) // Se a vida de um dos jogadores foi igual ou menor que zero, ocorrerá um determinado comando
		{
			sair = true; // O jogo se encerrará
		}
		system("cls"); // Comando para limpar a tela
	}
	cout << "Game Over" << endl; // Imprime uma frase informando o fim do jogo
	if (Vida1 > 0) cout << "Vitoria de: " << P1 << endl; // Imprime uma mensagem avisando que o jogador 1 ganhou
	else if (Vida2 > 0) cout << "Vitoria de: " << P2 << endl; // Imprime uma mensagem avisando que o jogador 2 ganhou
	else cout << "Ambos perderam" << endl; // Imprime uma mensagem avisando que os dois perderam

	return 0; // Fim do programa
}
