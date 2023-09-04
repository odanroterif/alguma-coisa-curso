Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
   // Seção de Declarações das variáveis
   nome: caracter
   quantidade: inteiro
   valor: real
   total: real
   desconto: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva ("nome do produto adquirido: ")
   leia (nome)
   escreva ("quantidade adquirido: ")
   leia (quantidade)
   escreva ("valor do produto adquirido: ")
   leia (valor)
   total <- quantidade * valor
   se (quantidade < 5) ou (quantidade = 5) entao
      desconto <- total * (2/100)
   fimse
   se (quantidade > 5) ou (quantidade <= 10) entao
      desconto <- total * (3/100)
   fimse
   se (quantidade > 10) entao
      desconto <- total * (5/100)
   fimse
   escreval (" ")
   escreva ("valor final com desconto: ", total - desconto :2 :2)
Fimalgoritmo