Algoritmo "semnome"
// Disciplina   : [Linguagem e Logica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
   // Se��o de Declara��es das vari�veis
   valorA: real
   valorG: real
   litro: real
   tipodecombustivel: caracter
   valortotal: real
   desconto: real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   valorA <- 3.79
   valorG <- 6.59
   escreva ("qual comb�stivel comprara?: ")
   leia (tipodecombustivel)
   escreva ("quantos litros?: ")
   leia (litro)
   limpatela
   se ( tipodecombustivel = "�lcool") e ( litro <= 25) entao
      valortotal <- valorA * litro
      desconto <- (valorA * litro) * 2/100
      escreval (" ")
      escreva ("total a pagar (2% de desconto): ", valortotal - desconto :2 :2)
   fimse
   se ( tipodecombustivel = "�lcool") e ( litro > 25) entao
      valortotal <- valorA * litro
      desconto <- (valorA * litro) * 4/100
      escreval (" ")
      escreva ("total a pagar (4% de desconto): ", valortotal - desconto :2 :2)
   fimse
   se ( tipodecombustivel = "gasolina") e ( litro <= 25) entao
      valortotal <- valorG * litro
      desconto <- (valorG * litro) * 3/100
      escreval (" ")
      escreva ("total a pagar (3% de desconto): ", valortotal - desconto :2 :2)
   fimse
   se ( tipodecombustivel = "gasolina") e ( litro > 25) entao
      valortotal <- valorG * litro
      desconto <- (valorG * litro) * 2/100
      escreval (" ")
      escreva ("total a pagar (5% de desconto): ", valortotal - desconto :2 :2)
   fimse
Fimalgoritmo