Módulo de Cálculo de Frete e Taxas de Envio

Sistema em C desenvolvido para simular a lógica de faturamento e frete de um e-commerce, aplicando validações rigorosas de dados e regras de negócio condicionais.

## Funcionalidades
- **Validação de Entradas:** Impede o processamento de produtos com IDs, preços ou distâncias inválidas.
- **Cálculo Dinâmico:** Aplica frete base por quilometragem (R$ 0,50/km) com adicional fixo para entregas Expressas.
- **Regra de Frete Grátis:** Aplica isenção total de frete para compras acima de R$ 200,00 em distâncias de até 100 km.

## Aprendizados e Desafios Técnicos
Durante o desenvolvimento e refatoração deste módulo, apliquei conceitos fundamentais de C:
- **Tratamento de Buffer (`scanf`):** Uso do espaço antes do especificador ` %c` para evitar a captura indesejada de quebras de linha (`\n`).
- **Controle de Fluxo de Erros:** Criação de funções de validação com retorno booleano (`0` ou `1`) para interromper imediatamente o programa no `main()` via `return 1;` caso dados inválidos fossem informados.
- **Otimização de Chamadas:** Armazenamento de retornos das funções em variáveis locais para evitar recálculos desnecessários no momento da exibição.