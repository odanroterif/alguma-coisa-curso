Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
   // Seção de Declarações das variáveis
   rendamensal: real
   emprestimosolicitado: real
   numerodeprestacoes: inteiro
   parcelas: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva  ("sua renda mensal: ")
   leia (rendamensal)
   escreva ("valor de emprestimo que precisa: ")
   leia (emprestimosolicitado)
   escreva ("quantas parcelas pagara por mês?: ")
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