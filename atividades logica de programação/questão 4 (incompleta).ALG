Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
// Se��o de Declara��es das vari�veis 
valormorango: real
valormaca: real
morangokg: real
macakg: real
kgtotal: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("quantos kg de morango levara?: ")
leia (morangokg)
escreva ("quantos kg de ma�� levara?: ")
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