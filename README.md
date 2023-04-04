# Codigo de algoritmos gulosos
Podemos usar como exemplo o troco de um caixa de supermercado, digamos que temos um sistema automatizado do caixa, onde o valor do troco é dado pelo algoritmo do sistema, estabelecendo isso, temos, uma compra de R$89,75 (oitenta e nove reais e setenta e cinco reais) e o cliente pagou com uma nota de R$100,00 (cem reais), sendo assim tem que devolver R$10,25 (dez reais e vinte e cinco centavos), porém o caixa só tem três notas de R$5,00 (cinco reais) e cinco notas de R$2,00 (dois reais), já nas moedas temos cinco de R$0,05 (cinco centavos), duas de R$0,10 (dez centavos) e ainda cinco de R$0,01 (um centavo). Tendo em vista o problema apresentado, através do algoritmo guloso será selecionada a melhor opção, que seria duas notas de R$5,00 (cinco reais), duas moedas de R$0,10 (dez centavos) e uma moeda de R$0,05(cinco centavos), sabendo-se que não teríamos a problemática de ter poucas notas e moedas para um troco mais efetivo.  

2.2 Exemplo 2
Uma loja virtual vende produtos em pacotes, e oferece descontos progressivos para a compra de pacotes maiores. Por exemplo, um pacote de 1 produto custa R$ 10,00 (dez reais), um pacote de 2 produtos custa R$ 18,00 (dezoito reais), um pacote de 3 produtos custa R$ 24,00 (vinte quatro reais) e um pacote de 4 produtos custa R$ 28,00 (vinte oito reais).
Suponha que um cliente deseja comprar 8 produtos na loja. Qual é o menor custo possível para a compra, considerando a compra de pacotes fechados?
A solução para este problema pode ser resolvida utilizando um algoritmo guloso. Podemos começar escolhendo o maior pacote que é menor ou igual ao número de produtos desejados. Neste caso, escolheríamos o pacote de 4 produtos.
Restariam então 4 produtos a serem comprados. Repetimos o processo, escolhendo novamente o maior pacote que é menor ou igual ao número de produtos restantes. Neste caso, escolheríamos novamente o pacote de 4 produtos.
No entanto, como restariam ainda 4 produtos a serem comprados, escolheríamos então o pacote de 2 produtos, gastando assim um total de R$56,00 (cinquenta e seis reais) para a compra de 8 produtos.
Portanto, utilizando um algoritmo guloso, conseguimos encontrar a solução ótima para a compra de produtos na loja virtual, garantindo o menor custo possível para o cliente.

2.3 Exemplo 3
Um exemplo de problema que pode ser resolvido com algoritmo guloso é o problema da mochila fracionária.
Imagine que você é um beta tester de produtos que receberá produtos de uma loja de eletrônicos e tem uma mochila de capacidade limitada. Você quer levar o maior valor possível de eletrônicos, mas não pode carregar mais do que sua mochila aguenta.
A loja tem os seguintes produtos disponíveis para roubo:
Um notebook que custa R$ 4.000 e pesa 2 kg
Um celular que custa R$ 1.500 e pesa 0,5 kg
Um tablet que custa R$ 2.000 e pesa 1 kg
Uma câmera que custa R$ 3.000 e pesa 1,5 kg
Sua mochila tem capacidade para 3 kg. Qual combinação de produtos deve pegar para obter o maior valor possível?
A solução para esse problema envolve ordenar os produtos pelo valor por quilo, em ordem decrescente, e adicionar os produtos à mochila até que ela esteja cheia. Se houver um produto que não caiba inteiro na mochila, deve-se colocar uma fração dele, na proporção do espaço disponível.
