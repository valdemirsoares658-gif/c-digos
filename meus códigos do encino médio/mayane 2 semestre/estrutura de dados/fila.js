// Criando uma fila usando um array
let fila = [];

// Adicionando elementos à fila (enqueue)
fila.push("João");
fila.push("Maria");
fila.push("Carlos");

// A fila agora contém: ["João", "Maria", "Carlos"]
console.log("Fila atual:", fila);

// Removendo o primeiro elemento da fila (dequeue)
let atendido = fila.shift();
console.log("Pessoa atendida:", atendido);

// A fila agora contém: ["Maria", "Carlos"]
console.log("Fila após atendimento:", fila);