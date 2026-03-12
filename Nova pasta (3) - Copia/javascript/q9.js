function BotaoClicado(){
    let button = document.getElementById("button");
    botao.innerHTML = "CLICADO :)";
    botao.style.background ="yellow";
    botao.style.color = "red";  
}

let botao1 = document.getElementById("button").addEventListener("click", BotaoClique);
