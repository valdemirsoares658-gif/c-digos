//Exemplo de ponteiro
let a = [1,2,3];
let b = a; //b aponta para o mesmo array 
b[0] = 99;
console.log(a);

//ponteiro sem referencia
let original = [10,20,30];
let copia = [... original]; //cópia independente
copia[0] = 99;
console.log(original);
console.log(copia);  

 /*ATIVIDADE DE PONTEIRo 
 1. Verifique se dois arrays apontam para o mesmo endereço de mémoria.
 
 2. copie uma matriz 2x2 usando [...] e mostre que as linhas ainda compartilham referência.
 
 3.Crie uma função que recebe dois arrays e diga se são o mesmo objeto na memória. */

 //1
 let d = [12,3,4];
 let f = d;
 console.log(d == f);
 

//2
let n = [
    [1,2],
    [3,4],
 ];
let c = [... n];
c[0][0] = 7;
console.log(n);
console.log(c);

//3
function f (f1, f2){
}
let x = [1,2,3];
let y = x;
let w = [2,4,6];
console.log(f(x,y));
console.log(f(x,w));
