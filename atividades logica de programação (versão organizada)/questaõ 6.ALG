Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis
notaum: real
notadois: real
media: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreva ("primeira nota: ")
leia (notaum)
escreva ("segunda nota: ")
leia (notadois)
escreval (" ")
escreva ("m�dia: ", (notaum + notadois) / 2)
media <- (notaum + notadois) / 2
se (media >= 6) entao
escreval (" ")
escreva ("felicitaciones, pasaste de la materia")
fimse
se (media = 4) entao
escreval (" ")
escreva ("te vas a la recuperacion, buena suerte")
fimse
se (media < 4) entao
escreval (" ")
escreva ("reprovado")
fimse
Fimalgoritmo