Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
   // Seção de Declarações das variáveis
   macacomprada: inteiro
   maca: real
   dozemacaes: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   maca <- 1.30
   dozemacaes <- 1.00
   escreva ("maçãs compradas: ")
   leia (macacomprada)
   se (macacomprada >= 12) entao
      escreval (" ")
      escreval ("valor a pagar: ", dozemacaes * macacomprada :2 :2)
   senao
      escreval ("valor a pagar: ", maca * macacomprada :2 :2)
   fimse
Fimalgoritmo