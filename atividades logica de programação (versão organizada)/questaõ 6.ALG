Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis
notaum: real
notadois: real
media: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreva ("primeira nota: ")
leia (notaum)
escreva ("segunda nota: ")
leia (notadois)
escreval (" ")
escreva ("média: ", (notaum + notadois) / 2)
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