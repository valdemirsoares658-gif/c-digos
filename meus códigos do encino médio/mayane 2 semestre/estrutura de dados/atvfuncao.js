// 1.crie uma função que calcule a média de três notas e retorne a situação do aluno (aprovado>=7, recupeação 5-6.9, reprovado <5).
// 2. crie uma função que receba um preço e um booleano indicando se o cliente tem desconto. Se tiver, aplique 10%.
// 3. crie uma fnção que classifica a idade em maior ou menor de idade.
// 4. crie uma função que decide se o número é positivo ou negativo

// atividade1
function situacao(a, b, c){
const d = a+b+c/3;


        if( d >= 7)
        
            return("aprovado");
        
        if (d > 5) 

            return("recuperação");
    if(d < 5)

            return("reprovado");
    }
console.log(situacao(1, 3, 8));

        // atividade 2

        function calcularpreco (preco, desconto){
            return desconto ? preco*0.9 : preco; 
        }
        console.log(calcularpreco (100, true));
        console.log(calcularpreco (100, false));

        // atividade 3

function classificarIdade(idade) {
    const d = idade;
if( d >= 18
)
        
            return("maior de idade");
              else

            return("menor de idade");
}
        console.log(classificarIdade(18));

        // atividade 4

        function positivonegativo(n){
            return n > 0 ? ("positivo") : ("negativo");
        }
        console.log(positivonegativo(1));
        console.log(positivonegativo(-5));
   
        
