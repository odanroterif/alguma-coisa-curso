Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/09/2023
Var
// Seção de Declarações das variáveis 
sexo: caracter
peso: real
altura: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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
escreva ("você digitou algo errado...")
fimescolha
Fimalgoritmo