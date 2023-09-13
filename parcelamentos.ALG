Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/09/2023
Var
   // Seção de Declarações das variáveis
   valor: real
   parcelas: inteiro
   pagamento: caracter
   desconto: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva ("digite o valor do produto comprado: ")
   leia (valor)
   escreva ("digite a forma de pagamento (1 para vista, 2 para prazo): ")
   leia (pagamento)
   escreval (" ")
   escolha pagamento
   caso "1"
      desconto <- valor * (10/100)
      escreva ("valor total: ", valor - desconto :2 :2)
   caso "2"
      escreva ("quantas parcelas? (limite de 6 parcelas): ")
      leia (parcelas)
   fimescolha
   escolha parcelas
   caso 1
      escreva ("valor das parcelas: ", valor/1 :2 :2)
   caso 2
      escreva ("valor das parcelas: ", valor/2 :2 :2)
   caso 3
      escreva ("valor das parcelas: ", valor/3 :2 :2)
   caso 4
      escreva ("valor das parcelas: ", valor/4 :2 :2)
   caso 5
      escreva ("valor das parcelas: ", valor/5 :2 :2)
   caso 6
      escreva ("valor das parcelas: ", valor/6 :2 :2)
   fimescolha
Fimalgoritmo