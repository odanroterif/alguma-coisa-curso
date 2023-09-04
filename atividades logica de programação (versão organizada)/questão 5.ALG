Algoritmo "semnome"
// Disciplina   : [Linguagem e Logica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
   // Seção de Declarações das variáveis
   A: real
   B: real
   operadoresmatematicos: caracter
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva ("digite um número: ")
   leia (A)
   escreva ("digite outro número: ")
   leia (B)
   escreval(" ")
   escreval ("qual operação quer fazer com estes 2 números?: ")
   leia (operadoresmatematicos)

   se (operadoresmatematicos = "subtração") entao
      escreval (" ")
      escreva ("resultado da conta: ", A - B)
   fimse

   se (operadoresmatematicos = "multiplicação") entao
      escreval (" ")
      escreva ("resultado da conta: ", A * B)
   fimse

   se (operadoresmatematicos = "soma") entao
      escreval (" ")
      escreva ("resultado da conta: ", A + B)
   fimse

   se (operadoresmatematicos = "divisão") entao
      escreval (" ")
      escreva ("resultado da conta: ", A / B)
   fimse

fimalgoritmo