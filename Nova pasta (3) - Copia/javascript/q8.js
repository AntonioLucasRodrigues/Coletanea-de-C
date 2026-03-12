let nome = prompt("Nome:");
let ra = prompt("Matrícula:");
let nota1 = parseFloat(prompt("Nota 1:"));
let nota2 = parseFloat(prompt("Nota 2:"));
let sum = nota1 + nota2;
let media = (nota1+nota2)/2;

document.write('<table border="1">');
document.write(`<tr> <td>Matrícula<td>${ra}</td></tr>`);
document.write(`<tr> <td>Soma das notas<td>${sum}</td></tr>`);
document.write(`<tr> <td>Media<td>${media}</td></tr>`);
document.write(`<tr> <td>Nome<td>${nome}</td></tr>`);