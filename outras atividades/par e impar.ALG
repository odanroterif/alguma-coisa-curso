Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Seção de Declarações das variáveis
   a: inteiro
   par: inteiro
   impar: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   para a de 1 ate 5 passo 1 faça
      escreva ("digite o", a ,"º número: ")
      leia (a)
      se ( a % 2 = 0) entao
         par <- par + 1
      fimse
      se ( a % 2 <> 0) entao
         impar <- impar + 1
      fimse
   fimpara
   escreval (" ")
   escreva ("números pares: ", par)
   escreval (" ")
   escreva ("números impares: ", impar)
Fimalgoritmo