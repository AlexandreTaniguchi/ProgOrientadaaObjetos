# Introdução<br />
A ideia do projeto é fazer um progama que simule o jogo Blackjack, ou 21, em C++ visando aprofundar conhecimento em progamação orientada a objetos. O jogo em si é simples e com regras de fácil entendimento, ele utiliza um baralho de 52 cartas,essas sendo 2,3,4,5,6,7,8,9,10,J,Q,K,A de 4 naipes diferentes(espadas(♠), paus(♣), copas(♥) e ouro(♦)), é possível separar o jogo em etapas para facilitar a implementação de tal.<br />
  
  #O JOGO <br />
    # Valores de cada carta: <br />
          Esses valores correspondem normalmente ao número da carta ( exemplo: 2♠ = 2), mas no caso das cartas J,Q,K, elas tem o mesmo valor que o 10, e o A pode ter um valor igual a 1 ou 11 dependendo da vontade do jogador.<br />
          (Para implementação do baralho a ideia inicial é utilzar um struct e separar o valor da carta em cada 1 de se seus vetores, com um print mostrando qual a carta específica, exemplo ( B[2]= 3; printf("Sua carta é o 3♣") )<br />
          (A ideia para implementação do A em C++ seria deixar o A=11 normalmente e caso o valor total da soma das cartas do jogador exceda 21 ( IF(C1+C2+C3... >21)) o valor de A se torna A=1)<br />
    ##Distribuição das Cartas<br />
          Primeiramente seria necessário decidir o número de jogadores, a ideia inicial é fazer um jogo com só 1 jogador além do dealer mas caso haja mais tempo seja possível implementar para que seja possível que múltiplas pessoas joguem ao mesmo tempo.<br />
          O jogador 1 recebe duas cartas das 52 do baralho, ambas reveladas ( com um print), o dealer em seguida recebe 2 cartas das 50 restantes, uma será revelada e outra não será. O jogador 1 em seguida poderá ver qual a soma do valor de suas cartas (exemplo: Se C1 = A♣ e C2 = 6♥, o valor da soma do jogador 1 seria 17), após ver esse valor ele terá a opção de hit(a=1), onde ele compra mais uma carta, ou stand(a=0) onde ele mantém as cartas da maneira que estão e passa a vez para o dealer( ou para outro jogador caso existe um), caso o jogador 1 escolha a opção de hit e a soma total de suas cartas exceda 21, ele imediatamente perde o jogo.<br />
          O dealer é obrigada a continuar comprando cartas(hit) até que a soma de suas cartas exceda ou seja igual a 17, ou seja a implementação do dealer seria um while( C1+c2+...<17) hit, caso o dealer exceda 21 o jogador(es) cuja somas das cartas não ultrapassaram 21 ganham, caso a soma das cartas do dealer seja igual a 21, os jogadores automaticamente perdem, caso a soma das cartas do dealer seja menor que 21 e maior ou igual a 17 esse valor deve ser comparado com o valor da soma do jogador(es) que não ultrapassaram 21 com a soma de suas cartas e caso a soma das cartas do dealer seja menor que a soma das cartas de um jogador ele ganha.<br />
          
    
    
    
