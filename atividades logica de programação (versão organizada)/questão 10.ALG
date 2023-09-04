Algoritmo "semnome"
// Disciplina   : [Linguagem e Logica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2023
Var
   // Seção de Declarações das variáveis
   valorA: real
   valorG: real
   litro: real
   tipodecombustivel: caracter
   valortotal: real
   desconto: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   valorA <- 3.79
   valorG <- 6.59
   escreva ("qual combústivel comprara?: ")
   leia (tipodecombustivel)
   escreva ("quantos litros?: ")
   leia (litro)
   limpatela
   se ( tipodecombustivel = "álcool") e ( litro <= 25) entao
      valortotal <- valorA * litro
      desconto <- (valorA * litro) * 2/100
      escreval (" ")
      escreva ("total a pagar (2% de desconto): ", valortotal - desconto :2 :2)
   fimse
   se ( tipodecombustivel = "álcool") e ( litro > 25) entao
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