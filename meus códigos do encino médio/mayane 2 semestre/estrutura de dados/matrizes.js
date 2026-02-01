//crie uma matriz e exiba o elemento da primeira posição e o elemento da última posição usando console
let matriz =[1,2,3,4]
console.log(matriz[0]);
console.log(matriz[matriz.length - 1]);

/* crie uma matriz 3x3, com números de 1 a 9 ... no console exiba: os elementos da primeira linha e a soma de todos os elementos*/
let matiz = [
    [1,2,3],
    [4,5,6],
    [7,8,9],
];
console.log("primeira linha", matiz[0]);
let soma=0;
for (let l of matiz) {
for (let valor of l){
    soma += valor;
}
}
 console.log("soma total", soma);

 //crie uma matriz 2x2 e exiba todos os elementos com suas posições
 
 let n = [
    [1,2],
    [3,4],
 ];
 // i = linha e j = coluna
 for (let i = 0; i<n.length; i++){
    for(let j = 0; j<n[i].length; j++){
      console.log(`posição [${i}][${j}] = ${n[i][j]}`);
    }
 }
 