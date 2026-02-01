/*Costrua dois vetores do tamanho 5 do tipo inteiro,
e some seus indices e armazene em um terceiro vetor e em seguida,
exiba os valores. vetor[0] = vetor[0] + vetor[0] + vetor[0]*/
#include <iostream>
using namespace std;

int main()
{
int vetor1[5] = {10,6,64,9,12};
int vetor2[5] = {25,7,9,3,23};
int soma[5];
for (int i = 0; i < 5; i++)
{
    soma[i] = vetor1[i] + vetor2[i];
}
for (int i = 0; i < 5; i++)
{
cout  << soma[i] << endl;
}
return 0;
}