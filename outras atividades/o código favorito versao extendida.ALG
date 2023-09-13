Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Seção de Declarações das variáveis
   i: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva ("digite sua média: ")
   leia (i)
   limpatela
   enquanto (i < 0) ou ( i > 10) faca
      escreva ("média invalida, digite novamente: ")
      leia (i)
      limpatela
   fimenquanto
   se ( i >= 7) entao
      escreval (" ")
      escreval ("média: ",i)
      escreva ("aluno aprovado")
   fimse
   se ( i = 5 ) ou (i = 6) entao
      escreval (" ")
      escreval ("média: ",i)
      escreva ("aluno em recuperação")
   fimse
   se ( i < 5) entao
      escreval (" ")
      escreval ("média: ",i)
      escreva ("aluno reprovado")
   fimse
Fimalgoritmo