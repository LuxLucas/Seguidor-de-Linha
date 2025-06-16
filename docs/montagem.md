<!-- Tópicos a desenvolver
    - [x] Tamanho dos parafusos
    - [x] Tamanho das chaves
    - [x] Links para materiais
    - [ ] Criar anexo com links de compra
    - [ ] Explicar montagem
    - [ ] Link para GitHub
    - [ ] Propor atividade
    - [ ] Propor sugestão de melhoria
        - [ ] Roda boba para esfera suspensa
    - [ ] Apresentar código de exemplo
-->

<!-- Sites para converter em PDF
    - https://cloudconvert.com/md-to-pdf (achei a formatação legal)
    - https://md-to-pdf.fly.dev/ (pode usar css)

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

<abbr title="Componentes">
    <img alt="Componentes" src="./img/componentes.jpg" width="45%">
</abbr>

A imagem acima mostra em seu canto superior, da esquerda para a direita, o suporte para baterias de Li-ion, baterias de Li-ion 18650, módulo de ponte h dupla 298N e uma das duas rodas de borracha. Em sua direita temos a roda boba, a segunda roda de borracha e os dois motores DC. Na parte inferior temos os cinco sensores de infravermelho. Já no canto esquerdo pode-se ver o chassi de acrílico e os suportes para os motores. Por fim, em seu centro, encontra-se o arduino, o cabo USB A/B, a protoboard de 50 pontos e o interruptor.

**Figura 2:** Parafusos

<abbr title="Parafusos">
    <img alt="Parafusos" src="./img/parafusos.jpg" width="45%">
</abbr>

A figura 2 retrata os parafusos e relacionados que são utilizados no projeto. Os parafusos de maior comprimento são os parafusos M3 de 30mm, já os menores são os M3 de 8mm. Em adicional temos as porcas M3 e os espaçadores fêmea-fêmea M3 x 10mm.

**Figura 3:** Cabos

<abbr title="Cabos">
    <img alt="Cabos" src="./img/cabos.jpg" width="45%">
</abbr>

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

<abbr title="Ferramentas">
    <img alt="Ferramentas" src="./img/ferramentas.jpg" width="45%">
</abbr>

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

<abbr title="Opcionais">
    <img alt="Opcionais"" src="./img/opcionais.jpg" width="45%">
</abbr>

Segundo a figura 5, da esquerda para a direita, tem-se o multímetro digital, a tesoura, o alicate universal de 5 polegadas, o carregador de baterias de Li-ion 18650, o suporte para sensores infravermelhos (seja criativo), a fita isolante, a pinça antiestática curva, o fluxo de solda e o sugador de solda.

<!-- Links de compra
     Kit Montagem: 
     - [Chassi](https://www.saravati.com.br/kit-chassi-2wd-acrilico-robo-carrinho-2-rodas-zk-2.html)

    Suporte para baterias de Li-ion:
    - [suporte-lion](https://www.robocore.net/bateria/suporte-para-2-baterias-li-ion-18650?srsltid=AfmBOor_YFWZUJ9QBr4dXt26yKBSm1Ti_UVmxL21Dzgk7uAdDb-gnmfR)

    Protoboard:
    - [protoboard](https://www.eletrogate.com/protoboard-400-pontos)

    Jumper-mm-10cm:
    - [jumper-mm-10cm](https://www.eletrogate.com/jumpers-macho-macho-40-unidades-de-10-cm?srsltid=AfmBOopj3ygqnbyStcPnUUMkOOEQ9ctBxNBvn34RnBwPTN38UrCSFwTw)

    Jumper-mm-20cm:
    - [jumper-mm-20cm](https://www.eletrogate.com/jumpers-macho-macho-20-unidades-de-20-cm?srsltid=AfmBOoqdTHicqRiY4TAPMFBXSCVJcq8wlXuK4BTyxlS4Ftyb0BWfKeT9)

    Jumper-mf-10cm:
    - [jumper-mf-10cm](https://www.eletrogate.com/jumpers-macho-femea-40-unidades-de-10-cm?srsltid=AfmBOopcVyyAZdjbZAwrjHoVHsO-WRJurifV3-UuuMjLYdxCl7Dg3HMH)

    Jumper-mf-20cm:
    - [jumper-mf-20cm](https://www.eletrogate.com/jumpers-macho-femea-20-unidades-de-20-cm?srsltid=AfmBOoqNvKC9VWh08xhpqPTwQwex6_WtbgL1IKt_m6AW-ihGkVxPXYOW)

    Fio estanhado 20cm:
    - [fio-estanhado-20cm](https://pt.aliexpress.com/item/1005005685884056.html)

    Módulo IR:
    - [modulo-ir](https://www.eletrogate.com/sensor-de-obstaculo-reflexivo-infravermelho?srsltid=AfmBOop6VT2wNobI0qi0k3QrNCkiNV-L7YlhRM5vs0_ZPoeMQ5_jBwrD)

    Ponte h:
    - [ponte-h](https://www.eletrogate.com/ponte-h-dupla-l298n?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&utm_source=google&utm_medium=cpc&utm_campaign=[MC4]_[G]_[PMax]_Categorias&utm_content=&utm_term=&gad_source=1&gad_campaignid=20223015315&gclid=EAIaIQobChMImoqR4JbvjQMVolRIAB3qcDeTEAYYASABEgLUBPD_BwE)

    Arduino:
    - [arduino](https://www.eletrogate.com/uno-r3-smd-ch340?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&utm_source=google&utm_medium=cpc&utm_campaign=ATEletrogate11PMAXKitsArduino2&utm_content=&utm_term=&gad_source=1&gad_campaignid=17419374643&gclid=EAIaIQobChMIwaGyyJnvjQMVoIfuAR1NZzOLEAQYASABEgJW5vD_BwE)

    Bateria Li-ion:
    - [bateria](https://www.moduloeletronica.com.br/produto/bateria-li-ion-cr18650-37v-2200mah-green/5519308)

    Fita isolante:
    - [fita-isolante](https://www.rasmateriais.com.br/fita-isolante-uso-geral-preta-g20-110f?utm_source=google&utm_medium=Shopping&utm_campaign=fita-isolante-uso-geral-preta-g20-110f&inStock&gad_source=1&gad_campaignid=21728603644&gclid=EAIaIQobChMIzbPk1KXvjQMVqFlIAB1BoiBuEAQYBCABEgIx9PD_BwE)

    Carregador de baterias de lion:
    - [carregador](https://produto.mercadolivre.com.br/MLB-2002348593-carregador-duplo-p-bateria-18650-42v-recarregavel-lanterna-_JM?matt_tool=48995110&matt_internal_campaign_id=&matt_word=&matt_source=google&matt_campaign_id=22603531562&matt_ad_group_id=185825366131&matt_match_type=&matt_network=g&matt_device=c&matt_creative=754595630379&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=402678149&matt_product_id=MLB2002348593&matt_product_partition_id=2423119992913&matt_target_id=pla-2423119992913&cq_src=google_ads&cq_cmp=22603531562&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22603531562&gclid=EAIaIQobChMIxKaEoqbvjQMV0JjuAR2m6i3jEAQYASABEgKcz_D_BwE)

    Tesoura:
    - [tesoura](https://www.mercadolivre.com.br/tesoura-grande-profissional-multiuso-escritorio-inox-21cm-cor-sortido/p/MLB34889111?pdp_filters=item_id%3AMLB5419381258&from=gshop&matt_tool=29457868&matt_internal_campaign_id=&matt_word=&matt_source=google&matt_campaign_id=22090354295&matt_ad_group_id=173090589036&matt_match_type=&matt_network=g&matt_device=c&matt_creative=727882731102&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735128188&matt_product_id=MLB34889111-product&matt_product_partition_id=2387649364682&matt_target_id=pla-2387649364682&cq_src=google_ads&cq_cmp=22090354295&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354295&gclid=EAIaIQobChMInJ_r3KfvjQMVV1BIAB1H2yu3EAQYAiABEgKhP_D_BwE)

    Pinça antiestática:
    - [pinça](https://www.x3distribuidoraloja.com.br/produto/pinca-relife-esd-15-antiestatica-curva.html?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&sku=04800&gad_source=1&gad_campaignid=20075394200&gclid=EAIaIQobChMIqPy3s6jvjQMVDEFIAB3OASsoEAQYASABEgJ9KfD_BwE)

    Alicate 5 polegadas:
    - [alicate](https://lista.mercadolivre.com.br/alicate-universal-5-polegadas)

    multímetro:
    - [multimetro](https://www.infodatas.com.br/produto/multimetro-digital-hikari-hm-2082-2023-09-25-09-09-07?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&utm_source=google&utm_campaign=P.max_maximizar_o_valor_Convers%C3%A3o&utm_medium=Grupo_anuncios&utm_term=&gad_source=1&gad_campaignid=17335536414&gclid=EAIaIQobChMItoaHjK_vjQMVlF9IAB1sWhAEEAQYASABEgIOVvD_BwE)

    Sugador de solda:
    - [sugador](https://www.infodatas.com.br/produto/multimetro-digital-hikari-hm-2082-2023-09-25-09-09-07?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&utm_source=google&utm_campaign=P.max_maximizar_o_valor_Convers%C3%A3o&utm_medium=Grupo_anuncios&utm_term=&gad_source=1&gad_campaignid=17335536414&gclid=EAIaIQobChMItoaHjK_vjQMVlF9IAB1sWhAEEAQYASABEgIOVvD_BwE)

    Fluxo de solda:
    - [fluxo](https://www.amazon.com.br/Pasta-de-Solda-50g-IMPLASTEC/dp/B075SDRNZL/ref=asc_df_B075SDRNZL?mcid=21ccc58fb7a53c1b9ca1093f61d8482c&tag=googleshopp00-20&linkCode=df0&hvadid=709857067668&hvpos=&hvnetw=g&hvrand=8407564175091867188&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9102289&hvtargid=pla-948557040459&psc=1&language=pt_BR&gad_source=1)

    Estação de solda:
    - [estacao-de-solda](https://produto.mercadolivre.com.br/MLB-2144285040-estaco-de-solda-e-retrabalho-antiestatica-yihua-852-_JM?matt_tool=30736356&matt_internal_campaign_id=&matt_word=&matt_source=google&matt_campaign_id=22090354316&matt_ad_group_id=173090590716&matt_match_type=&matt_network=g&matt_device=c&matt_creative=727882731798&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=106581254&matt_product_id=MLB2144285040&matt_product_partition_id=2386779495340&matt_target_id=pla-2386779495340&cq_src=google_ads&cq_cmp=22090354316&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354316&gclid=EAIaIQobChMIg6WmqrbvjQMVtyhECB1pQDc4EAQYAiABEgIIWvD_BwE)

    Esponja vegetal:
    - [esponja](https://www.casadarobotica.com/prototipagem-e-ferramentas/prototipagem/soldas/blister-com-4-unidades-de-esponja-vegetal-ev-un4-suetoku?srsltid=AfmBOoqADYqhGTkztHYR25l2f494hjNkMEOJ6Z6X-SAWjPZIOohbM1f5)

    Solda de estanho:
    - [solda](https://www.s2magazine.com.br/estanho-fio-1-5mm-500g-60x40-snxpb-solda-cobix?utm_source=google&utm_medium=Shopping&utm_campaign=estanho-fio-1-5mm-500g-60x40-snxpb-solda-cobix&inStock&gad_source=1&gad_campaignid=21023758031&gclid=EAIaIQobChMIpIaUmrrvjQMV01xIAB1BLStWEAQYAyABEgIa2fD_BwE)

    Chave de fenda:
    - [chave-fenda](https://shopee.com.br/product/352141433/23693010144?gads_t_sig=VTJGc2RHVmtYMTlxTFVSVVRrdENkVHQ3ZkZSUTMrR3pBWmZZNzdrcnRBM05iV2sxNDllZ2FIekN0a2lhY1o3OERDTzdERkNJQ1dVTkQ4MjdGS011dXpTVUdxeVVNd2NkbXk5UkE2bG1zNllNTE1kMWFWOTlvUmtxNWJOUVpLZnIzSFc2a25zdzA2TVZwWWZxdWVYMkNRPT0&gad_source=1&gad_campaignid=20828771740&gclid=EAIaIQobChMIu5OFtr7vjQMVJENIAB2o9ykpEAQYASABEgL3EvD_BwE)

    Pistola de cola-quente:
    - [pistola](https://www.amazon.com.br/Pistola-Cola-Quente-0018-Vonder/dp/B09BDBGJDD/ref=asc_df_B09BDBGJDD?mcid=8b79ed37d5643f24b274e4d6982f9475&tag=googleshopp00-20&linkCode=df0&hvadid=709857067812&hvpos=&hvnetw=g&hvrand=17623548310011785414&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9102289&hvtargid=pla-2420965852788&psc=1&language=pt_BR&gad_source=1)

    Tubo de cola:
    - [tubo-cola](https://produto.mercadolivre.com.br/MLB-3956820107-kit-c-10-basto-de-cola-quente-grossa-11mm-10-unidades-30cm-_JM?searchVariation=182795493618#polycard_client=search-nordic&searchVariation=182795493618&position=38&search_layout=grid&type=item&tracking_id=b2118049-bdd7-4cf4-8f2a-5966d9e067a5)
-->

