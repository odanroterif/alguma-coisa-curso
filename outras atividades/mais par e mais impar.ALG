Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Se��o de Declara��es das vari�veis
   numero: inteiro
   par: inteiro
   impar: inteiro
   quantidadepar: inteiro
   quantidadeimpar: inteiro
   a: inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   numero <- 1
   enquanto ( numero > 0) faca
      escreva ("digite 0 para interromper o processo")
      escreval (" ")
      escreva ("digite um n�mero: ")
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
   escreva ("quantidade de n�meros pares: ",quantidadepar)
   escreval (" ")
   escreva ("quantidade de n�meros impares: ",quantidadeimpar)
   escreval (" ")
   escreva ("m�dia dos pares: ",par/quantidadepar :1 :1)
   escreval (" ")
   escreva ("m�dia geral: ",(par + impar)/a :1 :1)
Fimalgoritmo