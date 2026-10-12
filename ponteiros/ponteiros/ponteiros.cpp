#include<iostream>
#include <string>
using namespace std;

void menu();
void introducaoPonteiros();

int main() {
	menu();
	return 0;
}

void menu() {
	int escolha = 0;
	while (escolha != 7) {
		system("cls"); // Limpa a tela do console
		cout << "Escolha uma opcao: " << endl;
		cout << "1 - Introducao a ponteiros" << endl;
		cout << "2 - Ponteiros e arrays" << endl;
		cout << "3 - Ponteiros e funcoes" << endl;
		cout << "4 - Ponteiros e alocacao dinamica de memoria" << endl;
		cout << "5 - Ponteiros e estruturas" << endl;
		cout << "6 - Ponteiros e classes" << endl;
		cout << "7 - Sair" << endl;
		cin >> escolha;
		
		switch (escolha) {
		case 1:
			system("cls");
			introducaoPonteiros();
			cout << "\nPressione ENTER para voltar ao menu..." << endl;
			cin.ignore();
			cin.get();
			break;
		case 2:
			// ponteirosArrays();
			break;
		case 3:
			// ponteirosFuncoes();
			break;
		case 4:
			// ponteirosAlocacaoDinamica();
			break;
		case 5:
			// ponteirosEstruturas();
			break;
		case 6:
			// ponteirosClasses();
			break;
		case 7:
			cout << "TCHAUZINHO!!" << endl;
			break;
		default:
			cout << "Opcao invalida! Pressione ENTER para tentar novamente..." << endl;
			cin.ignore();
			cin.get();
			break;
		}
	}
}

void introducaoPonteiros() {
	cout << "========================================" << endl;
	cout << "        ABA: INTRODUCAO A PONTEIROS     " << endl;
	cout << "========================================" << endl;
	int num = 4; // crio uma variável do tipo inteiro com o valor 4
	int* pn = &num; // crio um ponteiro que aponta para o endereço de memória da variável num
	// um ponteiro é como se fosse uma variável que guarda o endereço de memória de outra variável, e pra isso, ao ser declarado
	// é necessario que ele seja do mesmo tipo que a variável que ele vai apontar.
	cout << "O valor da variavel num e: " << num << endl; // imprimo o valor da variável num
	cout << "O endereco de memoria da variavel num e: " << &num << endl; // imprimo o endereço de memória da variável num
	cout << "O valor do ponteiro pn e: " << pn << endl; // imprimo o valor do ponteiro pn, que é o endereço de memória da variável num

	string veiculo = "Carro"; // crio uma variável do tipo string com o valor "Carro"
	cout << "O valor da variavel veiculo e: " << veiculo << endl; // imprimo o valor da variável veiculo
	cout << "O endereco de memoria da variavel veiculo e: " << &veiculo << endl; // imprimo o endereço de memória da variável veiculo
}