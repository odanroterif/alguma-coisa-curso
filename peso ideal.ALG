Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/09/2023
Var
// Se��o de Declara��es das vari�veis 
sexo: caracter
peso: real
altura: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("qual seu sexo (M para masculino e F para feminino): ")
leia (sexo)
escreva ("digite seu peso: ")
leia (peso)
escreva ("digite sua altura: ")
leia (altura)
escreval (" ")
escolha sexo
caso "M"
escreva ("peso ideal: ", (peso * altura) * 0.50 :2 :2)
caso "F"
escreva ("peso ideal: ", (peso * altura) * 0.40 :2 :2)
outrocaso
escreva ("voc� digitou algo errado...")
fimescolha
Fimalgoritmo