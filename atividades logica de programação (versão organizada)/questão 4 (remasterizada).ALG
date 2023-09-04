Algoritmo "semnome"
// Disciplina   : [Linguagem e Logica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
// Seção de Declarações das variáveis
valormorango: real
valormaca: real
morangokg: real
macakg: real
kgtotal: real
valortotal: real
desconto: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreva ("quantos kg de morango levara?: ")
leia (morangokg)
escreva ("quantos kg de maçã levara?: ")
leia (macakg)
kgtotal <- morangokg + macakg
limpatela
se ( morangokg > 5) entao
escreval (" ")
escreva ("valor total de morangos: ", morangokg * 2.20 :2 :2)
senao
escreval (" ")
escreva (" valor total de morangos: ", morangokg * 2.50 :2 :2)
fimse
se ( macakg > 5) entao
escreval (" ")
escreva ("valor total de maçã: ", macakg * 1.50 :2 :2)
senao
escreval (" ")
escreva (" valor total de maçã: ", macakg * 1.80 :2 :2)
fimse
se (morangokg > 5) entao
valormorango <- morangokg * 2.20
senao
valormorango <- morangokg * 2.50
fimse
se (macakg > 5) entao
valormaca <- macakg * 1.50
senao
valormaca <- macakg * 1.80
fimse
valortotal <- valormaca + valormorango
se (kgtotal > 8) ou (valortotal > 25.00) entao
desconto <- valortotal * (10/100)
escreval (" ")
escreva ("total a pagar(10% de desconto): ", valortotal - desconto :2 :2)
senao
escreval (" ")
escreval ("total a pagar: ", valortotal :2 :2)
fimse
Fimalgoritmo