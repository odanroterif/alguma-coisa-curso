Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
   // Se��o de Declara��es das vari�veis
   a: inteiro
   par: inteiro
   impar: inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   para a de 1 ate 5 passo 1 fa�a
      escreva ("digite o", a ,"� n�mero: ")
      leia (a)
      se ( a % 2 = 0) entao
         par <- par + 1
      fimse
      se ( a % 2 <> 0) entao
         impar <- impar + 1
      fimse
   fimpara
   escreval (" ")
   escreva ("n�meros pares: ", par)
   escreval (" ")
   escreva ("n�meros impares: ", impar)
Fimalgoritmo