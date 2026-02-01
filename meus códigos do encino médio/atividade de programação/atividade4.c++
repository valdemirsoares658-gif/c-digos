/*Costrua dois vetores e informe os seus valores e em seguida o programa vai 
verificar se os valores são iguais, se for iguais os valores do programa devem
somar esse indices e exibir o resultado em um terceiro vetor.
A [2,3,4,5,6]
B [1,5,4,5,6]
C [8,10,12]*/

#include <iostream>
using namespace std;
int main(){
  
   
int senha[5] = {2,3,4,5,6};
int senha1[5] = {1,5,4,5,6};
int senha2[5];

for (int i = 0; i < 5; i++){
        if(senha[i] ==senha1[i]){
            senha2[i] = senha[i] + senha1[i];
        } 
   else {
            senha2[i] = 0;
        }
 }     
    for (int i = 0; i < 5; i++){
        cout  << senha2[i] << endl;
    }
    return 0;
}