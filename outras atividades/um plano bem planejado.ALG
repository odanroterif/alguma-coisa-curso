Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Se��o de Declara��es das vari�veis
   nota: real
   pergunta: caracter
   media: real
   divisao: inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva ("insira uma nota: ")
   leia (nota)
   escreval (" ")
   enquanto ( nota > 10) ou ( nota < 0) faca
      escreva( "nota invalida, digite novamente: ")
      leia (nota)
      limpatela
   fimenquanto
   escreval (" ")
   escreva ("gostaria de inserir uma nota adicional?: ")
   leia (pergunta)
   enquanto (pergunta = "sim") faca
      escreval (" ")
      escreva ("insira uma nota: ")
      leia (nota)
      enquanto ( nota > 10) ou ( nota < 0) faca
         escreva( "nota invalida, digite novamente: ")
         leia (nota)
         limpatela
      fimenquanto
      divisao <- divisao + 1
      nota <- nota + nota
      limpatela
      escreva ("gostaria de inserir uma nota adicional?: ")
      leia (pergunta)
   fimenquanto
   media <- nota/divisao
   escreval (" ")
   escreva ("m�dia total: ", media :1 :1)
Fimalgoritmo