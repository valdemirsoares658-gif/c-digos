/*escreva um programa que crie dois vetores de três elementos cada. O primeiro vetor deve armazenar os preços 
dos produtos: Alface R$1,50/kg; Beterraba R$2.00/Kg, cenoura R$1.00/kg. O segundo vetor deve armazenar a quantidade desejada de
cada produto. Essa quantidade sera informada pelo usuario. Calcule o total a pagar por produto e o total final
da compra

prezado cliente,
digite a quantidade de quilos desejados:
Alface:1.50
Beterrabas:2.00
Cenoura:1.00

Resumo da compra 
----------------------
Alface = R$3.00
Beterraba = R$6.00
Cenoura = R$1.50
Total = R$10.50*/
#include <iostream>
using namespace std;

int main(){
 double precos[3] = {1.50, 2.00, 1.00};
cout << "prezado cliente," << endl;
cout << "digite a quantidade de quilos desejados:" << endl;
cout << "Alface: 1.50" << endl;
cout << "beterraba: 2.00" << endl;
cout << "cenoura: 1.00" << endl;
double quantidade[3] = {0, 0, 0};
for ( int i = 0; i < 3; i++){cout << "digite a quantidades de quilos:" << endl;
cin >> quantidade[i];
}
cout << "Resumo da compra " << endl;
cout << "------------------------" << endl;

float total0 = quantidade[0] * precos[0];
float total1 = quantidade[1] * precos[1];
float total2 = quantidade[2] * precos[2];
float totalfinal = total0 + total1 +total2;
cout << " alface = " << total0 << endl;
cout << " beterraba = " << total1 << endl;
cout << " cenoura = " << total2 << endl;
cout << " Total = " << totalfinal << endl;
return 0;
}