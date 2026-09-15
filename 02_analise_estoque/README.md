# Módulo de Análise de Estoque e Faturamento

Sistema em C desenvolvido para processar o inventário de um ERP/e-commerce, aplicando validação rigorosa de dados, manipulação de vetores e cálculo de métricas financeiras do lote.

## Funcionalidades
- **Processamento em Lote:** Captura de dados (preço e quantidade) para múltiplos produtos utilizando laços de repetição.
- **Validação com Encerramento Seguro:** Identificação de preços ou quantidades <= 0 com interrupção imediata da execução via *Early Return*.
- **Relatório do Inventário:** Exibição do valor total acumulado no estoque, média dos preços e identificação do produto de maior valor individual.

## Aprendizados e Desafios Técnicos
Durante a construção e refatoração deste módulo, apliquei conceitos fundamentais de lógica e estrutura de dados:
- **Passagem de Arrays e Tamanho por Parâmetro:** Envio de vetores e controle da dimensão via variável `tamanho` para funções de cálculo, soma e validação.
- **Controle de Fluxo com Early Return:** Interrupção imediata da função de validação ao encontrar o primeiro dado inválido, otimizando o processamento.
- **Algoritmo de Busca de Maior Valor:** Inicialização do ponteiro de comparação com o primeiro elemento do array (`maior = preco[0]`), prevenindo erros por lixo de memória.
