function Produto(nome, valor, cor){
    this.nome = nome;
    this.valor = valor;
    this.cor = cor;
}

let array_nome = [5];

for (let i = 1; i < 6; i++) {
  let nome1 = (prompt("Digite o nome do "+ i +" produto:"));
  array_nome.push(nome1);
}

let array_valor = [5];

for (let i = 1; i < 6; i++) {
  let valor1 = parseInt(prompt("Digite o valor do "+ i +" produto:"));
  array_valor.push(valor1);
}

let array_cor = [5];

for (let i = 1; i < 6; i++) {
  let cor1 = prompt("Digite a cor do "+ i +" produto:");
  array_cor.push(cor1);
}

for (let i = 1; i < 6; i++){
    document.write(i+"º produto:<br>")
    document.write("Nome: "+array_nome[i]+"<br>");
    document.write("Valor: "+array_valor[i]+"<br>");
    document.write("Cor: "+array_cor[i]+"<br><br>")
}
