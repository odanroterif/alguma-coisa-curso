Algoritmo "semnome"
// Disciplina   : [Linguagem e Logica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
// Se��o de Declara��es das vari�veis
valormorango: real
valormaca: real
morangokg: real
macakg: real
kgtotal: real
valortotal: real
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
escreval (" ")
escreva (" valor total de morangos: ", morangokg * 2.50 :2 :2)
fimse
se ( macakg > 5) entao
escreval (" ")
escreva ("valor total de ma��: ", macakg * 1.50 :2 :2)
senao
escreval (" ")
escreva (" valor total de ma��: ", macakg * 1.80 :2 :2)
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
escreval (" ")
escreva ("total a pagar: ", valortotal - 10/100 :2 :2)
senao
escreval (" ")
escreval ("total a pagar: ", valortotal :2 :2)
fimse
Fimalgoritmo