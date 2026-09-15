#include <stdio.h>

int validar_informacoes(float preco[], int quantidade[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {   if (preco[i] <= 0 || quantidade[i] <= 0)
        {   printf("Erro: Preco ou quantidade invalida.");
            return 0;
        }
    
        
    }
    

    return 1;
}

float calcular_total_estoque(float preco[], int quantidade[], int tamanho){
    float valor_estoque = 0.0f;

    for (int i = 0; i < tamanho; i++)
    {   
        valor_estoque += preco[i] * quantidade[i];
    }
    
    return valor_estoque;
}

float maior_preco(float preco[], int tamanho){
    float maior = preco[0];


    for (int i = 0; i < tamanho; i++)
    {
        if (preco[i] > maior)
        {
            maior = preco[i];
        }
        
    }
    return maior;
}

float soma_tudo(float preco[], int quantidade[], int tamanho){
    float soma_total = 0.0f;
    
    for (int i = 0; i < tamanho; i++)
    {
        soma_total += preco[i];
    }
        
    return soma_total;
}

int main(){
    float preco[5];
    int quantidade[5], tamanho = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Produto %d:\nValor: ", i + 1);
        scanf("%f", &preco[i]);

        printf("Quantidade: ");
        scanf("%d", &quantidade[i]);

        tamanho++;
    }
    
    //verificar dados
    if (!validar_informações(preco, quantidade, tamanho)){
        return 1;
    }
    
    float valor_estoque = calcular_total_estoque(preco, quantidade, tamanho);
    float soma_total = soma_tudo(preco, quantidade, tamanho);
    float maior = maior_preco(preco, tamanho);

    printf("Valor total do estoque: %.2f\n", valor_estoque);
    printf("Valor médio do estoque: %.2f\n", soma_total / tamanho);
    printf("Maior preço : %.2f\n", maior);
    

    return 0;
}