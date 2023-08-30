Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
// Seção de Declarações das variáveis 
valormorango: real
valormaca: real
morangokg: real
macakg: real
kgtotal: real
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
escreva (" valor total de morangos: ", morangokg * 2.50 :2 :2)
fimse
se ( macakg > 5) entao
escreval (" ")
escreva ("valor total de morangos: ", macakg * 1.50 :2 :2)
senao
escreva (" valor total de morangos: ", macakg * 1.80 :2 :2)
fimse
se (morangokg > 5) entao
valormorango <- morangokg * 2.20
senao
valormorango <- morangokg * 2.50
fimse
se (macakg > 5) entao
valormaca <- macakg * 2.20
senao
valormaca <- macakg * 2.50
fimse
valortotal <- valormaca + valormorango
Fimalgoritmo