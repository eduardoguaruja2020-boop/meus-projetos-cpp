#include<iostream>;
using namespace std;
int main() {

	int vidas = 0; // 10,25
	char letra = 'G'; // 'G'
	double decimal = 5.2; // 2.49999
	float decimal2 = 5.2; // 2.5
	bool vivo = true; // true = verdadeiro / false = falso
	string nome = "JoJo"; // "JoJo"

	cout << "Digite o número de vidas: ";
	cin >> vidas; // atribuindo um valor a variavel vidas

	cout << "Digite uma letra: ";
	cin >> letra; // atribuindo um valor a variavel letra

	cout << "Dinheiro: ";
	cin >> decimal; // atribuindo um valor a variavel decimal

	cout << "Digite seu nome: ";
	cin >> nome; // atribuindo um valor a variavel nome

	vidas = 100;

	cout << "\nVidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nVivo: " << vivo << "\nNome: " << nome << "\n";

	system("pause");

	return 0;
}