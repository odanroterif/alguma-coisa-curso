Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
   // Se��o de Declara��es das vari�veis
   macacomprada: inteiro
   maca: real
   dozemacaes: real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   maca <- 1.30
   dozemacaes <- 1.00
   escreva ("ma��s compradas: ")
   leia (macacomprada)
   se (macacomprada >= 12) entao
      escreval (" ")
      escreval ("valor a pagar: ", dozemacaes * macacomprada :2 :2)
   senao
      escreval ("valor a pagar: ", maca * macacomprada :2 :2)
   fimse
Fimalgoritmo