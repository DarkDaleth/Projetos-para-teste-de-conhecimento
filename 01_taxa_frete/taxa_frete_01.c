#include <stdio.h>

int validar_dados(int produto, float valor_produto, int dist, char tipo_envio){

    if (produto <= 0 || valor_produto <= 0 || dist <= 0){
        printf("Erro: Dados do produto ou distancia invalidos.\n");
        return 0;
    }else if (tipo_envio != 'N' && tipo_envio != 'E')
    {
        printf("Erro: Tipo de envio invalido.\n");
        return 0;
    }
    
    return 1;
}

float calculo_frete(float valor_produto, int distancia, char tipo_envio){


    if(valor_produto >= 200.00 && distancia <= 100){
        return 0;
    }

    if (tipo_envio == 'E'){

       return (distancia * 0.50f) + 30;

    }else
    {
       return distancia * 0.50f;
    }
    
    


}



int main(){
    int id_prod, dist_entrega;
    float valor_prod;
    char tipo_envio;

    printf("Id do produto: ");
    scanf("%d", &id_prod);
    printf("Valor do produto: ");
    scanf("%f", &valor_prod);
    printf("Distância entrega: ");
    scanf("%d", &dist_entrega);
    printf("Tipo de Entrega: ");
    scanf(" %c", &tipo_envio);

    if(!validar_dados(id_prod, valor_prod, dist_entrega, tipo_envio)){
        return 1;
    }

    float valor_frete = calculo_frete(valor_prod, dist_entrega, tipo_envio);

    printf("ID do produto: %d\n", id_prod);
    printf("Valor produto: %.2f\n", valor_prod);
    printf("valor do frete: %.2f\n", valor_frete);
    printf("Valor total a pagar: %.2f\n", valor_prod + valor_frete);


    return 0;
}