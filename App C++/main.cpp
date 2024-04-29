#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	float valor_pao, valor_carne, queijo, molho, vegetal, vegetal2, extra_un, valor_custo, valor_final;
	
	
	cout << "Qual o valor do pao utilizado para fazer o lanche? " << endl;
	cin >> valor_pao;
	
	cout << "Qual o valor da unidade da carne?" << endl;
	cin >> valor_carne;
	
	cout << "Informe o valor do KG de queijo: " << endl;
	cin >> queijo;
	
	cout << "Informe o valor da unidade do molho escolhido: " << endl;
	cin >> molho;
	
	cout << "Informe o valor do KG do vegetal escolhido: " << endl;
	cin >> vegetal;

	cout << "Informe o valor do KG do segundo vegetal ou opcional escolhido, se houver: " << endl;
	cin >> vegetal2;
	
	cout << "Informe o valor da unidade ou o preco por KG do produto extra, se houver: " << endl;
	cin >> extra_un;
	
	
	valor_custo = valor_pao + valor_carne + (queijo*0.1) + (molho*0.1) + (vegetal*0.05) + (vegetal2*0.1) + (extra_un*0.1);
	
	cout << "O valor do custo do lanche: R$" << valor_custo << endl;
	
	valor_final = valor_custo * 1.5;
	
	cout << "Com o acrecimo de 50% no valor do custo, temos o valor de venda: R$" << valor_final;
	
	
	
	return 0;
}
