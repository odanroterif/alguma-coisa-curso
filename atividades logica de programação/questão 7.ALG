Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis 
nome: caracter
quantidade: inteiro
valor: real
total: real
desconto: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("nome do produto adquirido: ")
leia (nome)
escreva ("quantidade adquirido: ")
leia (quantidade)
escreva ("valor do produto adquirido: ")
leia (valor)
total <- quantidade * valor
se (quantidade < 5) ou (quantidade = 5) entao
desconto <- total * (2/100)
fimse
se (quantidade > 5) ou (quantidade <= 10) entao
desconto <- total * (3/100)
fimse
se (quantidade > 10) entao
desconto <- total * (5/100)
fimse
escreval (" ")
escreva ("valor final com desconto: ", total - desconto :2 :2)
Fimalgoritmo