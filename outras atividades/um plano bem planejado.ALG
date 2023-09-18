Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
   // Seção de Declarações das variáveis
   nota: real
   pergunta: caracter
   media: real
   divisao: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva ("insira uma nota: ")
   leia (nota)
   escreval (" ")
   escreva ("gostaria de inserir uma nota adicional?: ")
   leia (pergunta)
   enquanto (pergunta = "sim") faca
      escreval (" ")
      escreva ("insira uma nota: ")
      leia (nota)
      divisao <- divisao + 1
      nota <- nota + nota
      limpatela
      escreva ("gostaria de inserir uma nota adicional?: ")
      leia (pergunta)
   fimenquanto
   media <- nota/divisao
   escreval (" ")
   escreva ("média total: ", media :1 :1)
Fimalgoritmo