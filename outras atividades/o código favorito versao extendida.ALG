Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Se��o de Declara��es das vari�veis
   i: inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva ("digite sua m�dia: ")
   leia (i)
   limpatela
   enquanto (i < 0) ou ( i > 10) faca
      escreva ("m�dia invalida, digite novamente: ")
      leia (i)
      limpatela
   fimenquanto
   se ( i >= 7) entao
      escreval (" ")
      escreval ("m�dia: ",i)
      escreva ("aluno aprovado")
   fimse
   se ( i = 5 ) ou (i = 6) entao
      escreval (" ")
      escreval ("m�dia: ",i)
      escreva ("aluno em recupera��o")
   fimse
   se ( i < 5) entao
      escreval (" ")
      escreval ("m�dia: ",i)
      escreva ("aluno reprovado")
   fimse
Fimalgoritmo