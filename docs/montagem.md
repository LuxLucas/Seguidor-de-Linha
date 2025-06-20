<!-- Tópicos a desenvolver
    - [x] Tamanho dos parafusos
    - [x] Tamanho das chaves
    - [x] Links para materiais
    - [ ] Criar anexo com links de compra
    - [ ] Explicar montagem
    - [x] Link para GitHub
    - [x] Propor atividade
    - [ ] Propor sugestão de melhoria
        - [x] Sensor infravermelho para matriz de infravermelho
        - [x] Suporte improvisado para modelagem 3d
        - [ ] Diminuir a quantidade de cabos
    - [ ] Apresentar código de exemplo
    - [ ] Links para datasheet dos componentes

    - [ ] Verificar se os links estão certos
-->

<!-- Sites para converter em PDF
    - https://cloudconvert.com/md-to-pdf (achei a formatação legal)
    - https://md-to-pdf.fly.dev/ (pode usar css)
    - https://dillinger.io/

    Mantenha as imagens na web
-->
# Seguidor de linha com 2 rodas

## Componentes do seguidor de linha

| Quantidade | Descrição |
| --- | --- |
| 1 | Aduino Uno |
| 2 | Bateria de Li-ion 18650 |
| 1 | Cabo USB 2.0 A/B 30cm |
| 3 | Cabo jumper macho-macho 10cm |
| 2 | Cabo jumper macho-macho 20cm |
| 16 | Cabo jumper macho-fêmea 10cm |
| 5 | Cabo jumper macho-fêmea 20cm |
| 1 | Chassi de acrílico 22 x 14,7cm (CxL) |
| 4 | Espaçador fêmea-fêmea sextavado M3 x 10mm |
| 4 | Fio estanhado de duas cabeças 20cm |
| 1 | Interruptor mini chave gangorra (KCD11-101) |
| 5 | Módulo sensor de obstáculo infravermelho 47 x 14 x 7mm |
| 2 | Motores DC (3~6v) |
| 4 | Parafuso M3 x 30mm (Fenda ou Philips) |
| 8 | Parafuso M3 x 8mm (Fenda ou Philips) |
| 1 | Ponte H Dupla L298N |
| 4 | Porca sextavada M3 |
| 1 | Protoboard com 50 Pontos 8 x 1 x 1cm (CxLxA) |
| 1 | Roda boba 38 x 32 x 38 x 29mm (CxLxAxD) |
| 2 | Rodas de borracha 7 x 7 x 2,6 x 7cm (CxLxPxD) |
| 4 | Suporte fixo para motor 10 x 33 x 3mm (CxLxP) |
| 1 | Suporte para 2 Baterias de Li-ion 18650 |

**Figura 1:** Componentes do seguidor de linha  

[![componentes-335x250px.png](https://i.postimg.cc/c1h3nQgx/componentes-335x250px.png)](https://postimg.cc/NLyLh2kS)

A imagem acima mostra em seu canto superior, da esquerda para a direita, o suporte para baterias de Li-ion, baterias de Li-ion 18650, módulo de ponte h dupla 298N e uma das duas rodas de borracha. Em sua direita temos a roda boba, a segunda roda de borracha e os dois motores DC. Na parte inferior temos os cinco sensores de infravermelho. Já no canto esquerdo pode-se ver o chassi de acrílico e os suportes para os motores. Por fim, em seu centro, encontra-se o arduino, o cabo USB A/B, a protoboard de 50 pontos e o interruptor.

**Figura 2:** Parafusos

[![Adobe-Express-file-1.jpg](https://i.postimg.cc/pd3H7n5g/Adobe-Express-file-1.jpg)](https://postimg.cc/SXL3YRrr)

A figura 2 retrata os parafusos e relacionados que são utilizados no projeto. Os parafusos de maior comprimento são os parafusos M3 de 30mm, já os menores são os M3 de 8mm. Em adicional temos as porcas M3 e os espaçadores fêmea-fêmea M3 x 10mm.

**Figura 3:** Cabos

[![Adobe-Express-file-3.jpg](https://i.postimg.cc/T16X2M90/Adobe-Express-file-3.jpg)](https://postimg.cc/nj0WTWN9)

Na figura 3 temos, de cima para baixo, cabos jumper macho-macho de 20cm, cabos jumper macho-macho de 10cm, cabos jumper macho-fêmea de 10cm, cabos jumper macho-fêmea de 20cm e os fios estanhados de duas cabeças com 20cm de comprimento.

## Ferramentas de Montagem

| Quantidade | Descrição |
| --- | --- |
| 1 | Chave de fenda com ponta 3mm |
| 1 | Estação de solda |
| 1 | Esponja vegetal 7 x 4,5 x 1cm (CxLxP) |
| 1 | Pistola de Cola Quente |
| 1 | Solda de estanho 60x40 500g 1mm |
| 1 | Tubo de cola quente 11mm x 30cm (DxC, tamanho varia por pistola)|

**Figura 4:** Ferramentas de montagem

[![Adobe-Express-file-2.jpg](https://i.postimg.cc/yxyCkQpH/Adobe-Express-file-2.jpg)](https://postimg.cc/y3xbGPzQ)

Com base na figura 4 percebe-se, da esquerda para a direita, a esponja vegetal, o suporte para o ferro de solda, o ferro de solda, a fonte da estação de solda, solda de estanho, chave de fenda com ponta M3 e a pistola de cola quente carregada.

## Itens aconselháveis ao projeto

| Quantidade | Descrição |
| --- | --- |
| 1 | Alicate universal 5 polegadas |
| 1 | Carregador de baterias de Li-ion 18650 |
| 1 | Fita isolante (preta ou branca) 20mm x 10m (LxC)|
| 1 | Fluxo de solda |
| 1 | Multímetro digital |
| 1 | Pinça antiestática curva |
| 1 | Sugador de solda |
| 1 | Suporte para sensores infravermelhos 6 x 2,5cm (CxL) |
| 1 | Tesoura |

**Figura 5:** Ferramentas opcionais do projeto

[![Adobe-Express-file-4.jpg](https://i.postimg.cc/767kyYgb/Adobe-Express-file-4.jpg)](https://postimg.cc/VrYTqwZc)

Segundo a figura 5, da esquerda para a direita, tem-se o multímetro digital, a tesoura, o alicate universal de 5 polegadas, o carregador de baterias de Li-ion 18650, o suporte para sensores infravermelhos (seja criativo), a fita isolante, a pinça antiestática curva, o fluxo de solda e o sugador de solda.

## Montagem

### Roda boba

Posicione e parafuse as espaçadeiras M3 na parte que será a traseira do chassi. Em seguida, parafuse a roda boba nas espaçadeiras.

<!-- Imagem 1 / espaçadeiras parafusadas -->
<!-- Imagem 2 / roda boba parafusada -->

### Motores

Solde os fios estanhados nos motores como no exemplo abaixo. Utilize o fluxo de solda na região que será soldada para melhor aderência da solda.

<!-- Imagem 3 / motores soldados -->

> **Nota:** Deixe a esponja úmida para limpar o ferro de solda do acúmulo de estanho.

Após posicionado os suportes entre o motor, ajuste os parafusos M3 de 30mm nas entradas e enrosque-os com as porcas M3. Certifique-se que o motor não esteja frouxo - pode utilizar o alicate para segurar as porcas enquanto parafusa. Repita o processo no segundo motor para ficar como na figura abaixo.

<!-- Imagem 4 / motores parafusados -->

### Arduino

Utilizando cola quente, posicione o arduino na parte que será a traseira do chassi - acima da roda boba.

<!-- Imagem 5 / arduino fixado -->

### Ponte H

Antes de fixar a ponte H, retire os pino das entradas ENA e ENB, elas são responsáveis pela velocidade dos motores. 

> **Nota:** Se os pinos EN forem removidos, mas não cabeados, os motores não se moverão. 

<!-- Imagem 6 / pinos EN da ponte H removidos -->

Agora, novamente com a cola quente, posicione o módulo de ponte h próximo ao arduino. Nessa etapa não me preocupei com a centralização do componente para facilitar o uso do interruptor, como será percebido posteriormente.

<!-- Imagem 7 / ponte h fixado -->

### Suporte para baterias de Li-ion

Aplique cola quente na parte inferior do suporte de baterias de Li-ion e o encaixe após o módulo de ponte h e os suportes dos motores.

<!-- Imagem 8 / suporte de baterias fixado -->

### Protoboard

<!-- [Explique sua gambiarra caso as barras condutoras estejam amostra] -->

<!-- Imagem 9 / gambiarra na protoboard -->

Use cola quente na parte inferior da protoboard e fixe-a próximo ao suporte de baterias.

<!-- Imagem 10 / protoboard fixado -->

### Interruptor

Coloque o interruptor no centro do chassi. Perceba como os fios do suporte de baterias estão posicionados, os usaremos em seguida.

<!-- Imagem 11 / interruptor visto de cima -->

Solde o fio positivo do suporte de baterias no interruptor. Em seguida, solde um dos jumpers macho-macho no outro pino do interruptor, como no exemplo a seguir:

<!-- Imagem 12 / interruptor com fios soldados -->

> **Nota:** Corte a ponta do jumper com alicate se for muito grande, os fios não podem ter contato.

### Sensores infravermelho

Antes de posicionar os sensores, verifique se estão calibrados. Para ajustar a sensibilidade à luz dos sensores rotacione seus potenciômetros.

<!-- Imagem 13 / esquema de sensor conectado ao arduino -->

<!-- Imagem 14 / sensor captando a linha -->

<!-- Imagem 15 / sensor fora da linha -->

Esses componentes serão colados na parte frontal do chassi obedecendo os seguintes critérios: 
- A parte receptora do infravermelho deve estar em direção ao chassi;
<!-- Imagem 16 / foto da orientaçãos do led receptor do sensor -->
- A altura dos sensores em relação ao solo não deve ultrapassar 1cm, sendo aconselhável estarem à 5mm de altura para melhor precisão dos sensores;
<!-- Imagem 17 / foto da altura dos sensores -->
- A distância entre cada sensor não deve ser maior que o tamanho da linha a ser seguida, dessa forma pontos cegos entre os sensores são evitados;
<!-- Imagem 18 / foto da distância entre os sensores -->

>**Nota:** Foi colado um suporte improvisado para melhor fixação dos sensores ao carrinho. 

### Cabeamento

De forma geral, a utilização dos cabos jumpers ocorrerá da seguinte forma:

<!-- Imagem 19 / Visão geral de cabeamento -->

#### Alimentação da ponte H

Para alimentar a ponte H conecte o cabo jumper macho-macho soldado ao interruptor na porta de 12V, que suporta de 6V a 35V. Já a porta GND do módulo receberá o cabo GND do suporte de baterias de Li-íon. Quando a ponte H for alimentada acenderá um LED nela contido.

<!-- Imagem 20 / Ponte H sendo alimentada -->

#### Controle de motores

Conecte os fios VCC e GND dos motores nas portas OUT1 a OUT4 da ponte H, sendo OUT1 e OUT2 para um motor e OUT3 e OUT4 para outro. Com os cabos macho-fêmea conecte os pinos de EN e IN no arduino, como na figura abaixo:

<!-- Imagem 21 / Diagrama de conexão dos motores -->

>**Nota:** os pinos EN devem ser plugados em entradas que suportem PWM do arduino.

#### Alimentação do arduino

Ainda no módulo ponte H dupla L298N, prenda um cabo jumper macho-macho de 10cm de comprimento na porta de 5V e conecte num dos pontos da protoboard. Adicione também na porta GND deste módulo um outro cabo jumper macho-macho de 10 cm de comprimento e pine sua estremidade em outro ponto da protoboard. Por fim, conecte um cabo jumper macho-macho de 20 cm de comprimento numa das portas 5V do arduino e sua estremidade na coluna da protoboard alimentada pela ponte H. Um outro cabo do mesmo tipo que o anterior deve ser pinado numa das portas GND do arduino e sua sua outra ponta encaixada na mesma coluna do cabo GND da ponte H. A figura abaixo ajuda a demonstrar o resultado:

<!-- Imagem 22 / arduino sendo alimentado -->

>**Nota:** uma pinça talvez ajude com os fios quando ficarem muito numerosos.

#### Controle de sensores

Para ligar os sensores é preciso, com cabos jumper macho-fêmea de 10cm, ligar a entrada VCC e GND dos sensores na sua respectiva coluna da protoboard.

<!-- Imagem 23 / sensor sendo alimentado -->

> **Nota:** se desejar, pode utilizar fita para unir e organizar jumpers.

Com os cabos macho-fêmea de 20cm, interligue os sensores por meio da saída OUT com o arduino nas seguintes portas:

| Ponte H | Arduino |
| --- | --- |
| ENA | 6 |
| IN1 | 7 |
| IN2 | 8 |
| IN3 | 9 |
| IN4 | 10 |
| ENB | 11 |

## Código de exemplo

Para testar o carrinho montado seguindo os passos citados acima, providenciei um código para ser compilado pelo arduino. O programa está disponibilizado num repositório do GitHub, para acessá-lo clique [nesse link](https://github.com/LuxLucas/Seguidor-de-Linha). 

Clone o repositório e faça o upload desse [código](https://github.com/LuxLucas/Seguidor-de-Linha/blob/main/src/main.cpp) no arduino

>**Nota:** o programa foi feito para seguir linha preta

## Proposta de atividade
**Atividade 1:** Com o seguidor de linha montado e com os comandos gravados no arduino é hora de testar. Crie uma pista com fita isolante preta e analise como o carrinho se comporta e faça correções, se necessário.

<!-- Imagem 24 / exemplo de pista -->

**Atividade 2:** Caso mais de um seguidor de linha tenha sido montado, seria possível, dentro de uma pista, fazer um "pega-pega" desses carrinhos. Nesse caso, dois carrinhos poderiam ser colocados em pontos contrários da pista, aquele que for mais rápido e tocar no outro primeiro, ganha.

**Atividade 3:** Me parece interessante seria a de desmontar e remontar o seguidor de linha em diferentes maneiras a fim de encontrar um modelo mais eficiente - ou simplesmente para ver o resultado.

## Sugestões

Durante a montagem do projeto percebi alguns pontos que poderiam ser melhorados em versões futuras, sendo esses tópicos:

- **Trocar módulos IR:** Os sensores de infravermelho, mesmo calibrados, às vezes não respondiam corretamente quando estavam por cima da linha. Os sensores poderiam ser trocados por alguma matriz de sensor infravermelho, algo utilizado em seguidores de linha para competições.

- **Suporte feito com desenho 3D:** Se a proposta da matriz de sensores infravermelho não ser uma opção aceita atualmente, recomendo pelo menos o desenho de um suporte para os sensores de infravermelho atuais. Isso ajudaria em dar mais área para a cola desses módulos e dificultaria um pouco mais as quedas por colisão.

- **Diminuir os cabos:** A quantidade de cabos no projeto atual torna possível problemas de desconexão e manutenção. Recomendo utilizar placas e componentes que se comunicam por meio de internet ou bluetooth, diminuindo assim, a quantidade de cabos no projeto.

Você também pode contribuir com melhorias, sejam de montagem, código e demais outros tópicos. Consulte seu professor ou faça uma *issue* no repositório do GitHub.

## Links de compras

Caso seja necessário, a seguir uma lista de links para comprar os componentes do carrinho seguidor de linha montado no projeto:

## Links de compras

- [**Alicate universal 5 polegadas**](https://lista.mercadolivre.com.br/alicate-universal-5-polegadas)

- [**Bateria Li-ion (18650)**](https://www.moduloeletronica.com.br/produto/bateria-li-ion-cr18650-37v-2200mah-green/5519308)

- [**Carregador de baterias Li-ion**](https://produto.mercadolivre.com.br/MLB-2002348593-carregador-duplo-p-bateria-18650-42v-recarregavel-lanterna-_JM?matt_tool=48995110&matt_internal_campaign_id=&matt_word=&matt_source=google&matt_campaign_id=22603531562&matt_ad_group_id=185825366131&matt_match_type=&matt_network=g&matt_device=c&matt_creative=754595630379&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=402678149&matt_product_id=MLB2002348593&matt_product_partition_id=2423119992913&matt_target_id=pla-2423119992913&cq_src=google_ads&cq_cmp=22603531562&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22603531562&gclid=EAIaIQobChMIxKaEoqbvjQMV0JjuAR2m6i3jEAQYASABEgKcz_D_BwE)

- [**Chave de fenda**](https://shopee.com.br/product/352141433/23693010144?gads_t_sig=VTJGc2RHVmtYMTlxTFVSVVRrdENkVHQ3ZkZSUTMrR3pBWmZZNzdrcnRBM05iV2sxNDllZ2FIekN0a2lhY1o3OERDTzdERkNJQ1dVTkQ4MjdGS011dXpTVUdxeVVNd2NkbXk5UkE2bG1zNllNTE1kMWFWOTlvUmtxNWJOUVpLZnIzSFc2a25zdzA2TVZwWWZxdWVYMkNRPT0&gad_source=1&gad_campaignid=20828771740&gclid=EAIaIQobChMIu5OFtr7vjQMVJENIAB2o9ykpEAQYASABEgL3EvD_BwE)

- [**Estação de solda Yihua 852**](https://produto.mercadolivre.com.br/MLB-2144285040-estaco-de-solda-e-retrabalho-antiestatica-yihua-852-_JM?matt_tool=30736356&matt_internal_campaign_id=&matt_word=&matt_source=google&matt_campaign_id=22090354316&matt_ad_group_id=173090590716&matt_match_type=&matt_network=g&matt_device=c&matt_creative=727882731798&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=106581254&matt_product_id=MLB2144285040&matt_product_partition_id=2386779495340&matt_target_id=pla-2386779495340&cq_src=google_ads&cq_cmp=22090354316&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354316&gclid=EAIaIQobChMIg6WmqrbvjQMVtyhECB1pQDc4EAQYAiABEgIIWvD_BwE)

- [**Esponja vegetal**](https://www.casadarobotica.com/prototipagem-e-ferramentas/prototipagem/soldas/blister-com-4-unidades-de-esponja-vegetal-ev-un4-suetoku?srsltid=AfmBOoqADYqhGTkztHYR25l2f494hjNkMEOJ6Z6X-SAWjPZIOohbM1f5)

- [**Fluxo de solda**](https://www.amazon.com.br/Pasta-de-Solda-50g-IMPLASTEC/dp/B075SDRNZL/ref=asc_df_B075SDRNZL?mcid=21ccc58fb7a53c1b9ca1093f61d8482c&tag=googleshopp00-20&linkCode=df0&hvadid=709857067668&hvpos=&hvnetw=g&hvrand=8407564175091867188&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9102289&hvtargid=pla-948557040459&psc=1&language=pt_BR&gad_source=1)

- [**Fio estanhado 20cm**](https://pt.aliexpress.com/item/1005005685884056.html)

- [**Jumper macho-fêmea de 10cm**](https://www.eletrogate.com/jumpers-macho-femea-40-unidades-de-10-cm?srsltid=AfmBOopcVyyAZdjbZAwrjHoVHsO-WRJurifV3-UuuMjLYdxCl7Dg3HMH)

- [**Jumper macho-fêmea de 20cm**](https://www.eletrogate.com/jumpers-macho-femea-20-unidades-de-20-cm?srsltid=AfmBOoqNvKC9VWh08xhpqPTwQwex6_WtbgL1IKt_m6AW-ihGkVxPXYOW)

- [**Jumper macho-macho de 10cm**](https://www.eletrogate.com/jumpers-macho-macho-40-unidades-de-10-cm?srsltid=AfmBOopj3ygqnbyStcPnUUMkOOEQ9ctBxNBvn34RnBwPTN38UrCSFwTw)

- [**Jumper macho-macho de 20cm**](https://www.eletrogate.com/jumpers-macho-macho-20-unidades-de-20-cm?srsltid=AfmBOoqdTHicqRiY4TAPMFBXSCVJcq8wlXuK4BTyxlS4Ftyb0BWfKeT9)

- [**Kit de montagem**](https://www.saravati.com.br/kit-chassi-2wd-acrilico-robo-carrinho-2-rodas-zk-2.html)

- [**Módulo IR**](https://www.eletrogate.com/sensor-de-obstaculo-reflexivo-infravermelho?srsltid=AfmBOop6VT2wNobI0qi0k3QrNCkiNV-L7YlhRM5vs0_ZPoeMQ5_jBwrD)

- [**Módulo sensor infravermelho**](https://www.eletrogate.com/sensor-de-obstaculo-reflexivo-infravermelho?srsltid=AfmBOop6VT2wNobI0qi0k3QrNCkiNV-L7YlhRM5vs0_ZPoeMQ5_jBwrD)

- [**Multímetro digital Hikari HM-2082**](https://www.infodatas.com.br/produto/multimetro-digital-hikari-hm-2082-2023-09-25-09-09-07?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&utm_source=google&utm_campaign=P.max_maximizar_o_valor_Convers%C3%A3o&utm_medium=Grupo_anuncios&utm_term=&gad_source=1&gad_campaignid=17335536414&gclid=EAIaIQobChMItoaHjK_vjQMVlF9IAB1sWhAEEAQYASABEgIOVvD_BwE)

- [**Pistola de cola quente Vonder**](https://www.amazon.com.br/Pistola-Cola-Quente-0018-Vonder/dp/B09BDBGJDD/ref=asc_df_B09BDBGJDD?mcid=8b79ed37d5643f24b274e4d6982f9475&tag=googleshopp00-20&linkCode=df0&hvadid=709857067812&hvpos=&hvnetw=g&hvrand=17623548310011785414&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9102289&hvtargid=pla-2420965852788&psc=1&language=pt_BR&gad_source=1)

- [**Pistola de cola quente**](https://www.amazon.com.br/Pistola-Cola-Quente-0018-Vonder/dp/B09BDBGJDD/ref=asc_df_B09BDBGJDD?mcid=8b79ed37d5643c1b9ca1093f61d8482c&tag=googleshopp00-20&linkCode=df0&hvadid=709857067668&hvpos=&hvnetw=g&hvrand=8407564175091867188&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9102289&hvtargid=pla-948557040459&psc=1&language=pt_BR&gad_source=1)

- [**Tubo de cola quente**](https://produto.mercadolivre.com.br/MLB-3956820107-kit-c-10-basto-de-cola-quente-grossa-11mm-10-unidades-30cm-_JM?searchVariation=182795493618#polycard_client=search-nordic&searchVariation=182795493618&position=38&search_layout=grid&type=item&tracking_id=b2118049-bdd7-4cf4-8f2a-5966d9e067a5)

- [**Solda de estanho Cobix 60/40**](https://www.s2magazine.com.br/estanho-fio-1-5mm-500g-60x40-snxpb-solda-cobix?utm_source=google&utm_medium=Shopping&utm_campaign=estanho-fio-1-5mm-500g-60x40-snxpb-solda-cobix&inStock&gad_source=1&gad_campaignid=21023758031&gclid=EAIaIQobChMIpIaUmrrvjQMV01xIAB1BLStWEAQYAyABEgIa2fD_BwE)

## Datasheets de componentes

Os datasheets são documentos com informações técnicas de componentes, módulos, placas e etc. São usados como material de consulta para entender sua natureza.

- [**Arduino**](https://www.alldatasheet.com/datasheet-pdf/download/1943445/ARDUINO/ARDUINO-UNO.html)

- [**Motor DC 5V**](https://cdn.sparkfun.com/datasheets/Robotics/DG01D.jpg)

- [**Guia da ponte H**](https://blog.eletrogate.com/guia-definitivo-de-uso-da-ponte-h-l298n/) e [**Circuito L298N**](https://www.google.com/url?sa=t&source=web&rct=j&opi=89978449&url=https://www.st.com/resource/en/datasheet/l298.pdf&ved=2ahUKEwi99r7Kg_yNAxVYB7kGHe0NLJUQFnoECBoQAQ&usg=AOvVaw2N-avnGevlvQW2n7mZbsGQ)

- [**Guia do sensor infravermelho**](https://blogmasterwalkershop.com.br/arduino/como-usar-com-arduino-sensor-infravermelho-reflexivo-de-obstaculo)