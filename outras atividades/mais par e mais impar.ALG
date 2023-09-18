Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Seção de Declarações das variáveis
   numero: inteiro
   par: inteiro
   impar: inteiro
   quantidadepar: inteiro
   quantidadeimpar: inteiro
   a: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   numero <- 1
   enquanto ( numero > 0) faca
      escreva ("digite 0 para interromper o processo")
      escreval (" ")
      escreva ("digite um número: ")
      leia (numero)
      se ( numero > 0 ) e ( numero%2 = 0)  entao
         par <- par + numero
         quantidadepar <- quantidadepar + 1
      fimse
      se ( numero > 0 ) e ( numero%2 <> 0)  entao
         impar <- impar + numero
         quantidadeimpar <- quantidadeimpar + 1
      fimse
      limpatela
   fimenquanto
   a <- quantidadepar + quantidadeimpar
   escreva ("quantidade de números pares: ",quantidadepar)
   escreval (" ")
   escreva ("quantidade de números impares: ",quantidadeimpar)
   escreval (" ")
   escreva ("média dos pares: ",par/quantidadepar :1 :1)
   escreval (" ")
   escreva ("média geral: ",(par + impar)/a :1 :1)
Fimalgoritmo