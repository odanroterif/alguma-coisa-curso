Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
   // Se��o de Declara��es das vari�veis
   rendamensal: real
   emprestimosolicitado: real
   numerodeprestacoes: inteiro
   parcelas: real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva  ("sua renda mensal: ")
   leia (rendamensal)
   escreva ("valor de emprestimo que precisa: ")
   leia (emprestimosolicitado)
   escreva ("quantas parcelas pagara por m�s?: ")
   leia (numerodeprestacoes)
   parcelas <- rendamensal * (30/100)
   se (emprestimosolicitado > rendamensal * 10) ou ( numerodeprestacoes < parcelas) entao
      escreval (" ")
      escreva ("emprestimo negado")
   senao
      escreval (" ")
      escreva ("emprestimo aprovado")
   fimse
Fimalgoritmo