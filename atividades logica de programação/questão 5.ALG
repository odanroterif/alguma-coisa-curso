Algoritmo "semnome"
// Disciplina   : [Linguagem e Logica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
   // Se��o de Declara��es das vari�veis
   A: real
   B: real
   operadoresmatematicos: caracter
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva ("digite um n�mero: ")
   leia (A)
   escreva ("digite outro n�mero: ")
   leia (B)
   escreval(" ")
   escreval ("qual opera��o quer fazer com estes 2 n�meros?: ")
   leia (operadoresmatematicos)

   se (operadoresmatematicos = "subtra��o") entao
      escreval (" ")
      escreva ("resultado da conta: ", A - B)
   fimse

   se (operadoresmatematicos = "multiplica��o") entao
      escreval (" ")
      escreva ("resultado da conta: ", A * B)
   fimse

   se (operadoresmatematicos = "soma") entao
      escreval (" ")
      escreva ("resultado da conta: ", A + B)
   fimse

   se (operadoresmatematicos = "divis�o") entao
      escreval (" ")
      escreva ("resultado da conta: ", A / B)
   fimse

fimalgoritmo