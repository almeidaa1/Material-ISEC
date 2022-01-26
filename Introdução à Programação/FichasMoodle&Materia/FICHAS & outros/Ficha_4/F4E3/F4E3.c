/*
Especificaçoes E analise do Problema

DADOS DE ENTRADA
tipoprod (texto (char) ) : Tipo de produto (alimentar ou nao alimentar)
preco (real) : preço do produto

RESULTADOS PRETENDIDOS
prodalim (inteiro) : numero de produtos alimentares
prodnalim (inteiro) : numero de produtos nao alimentares
total (inteiro) : numero total de produtos
precoiva (real) : preco com iva com duas casas decimais
precosem (real) : preco sem iva com duas casas decimais

PROCESSAMENTO REQUERIDO
IVAALIM <- 0.06
IVANALIM <- 0.23
prodalim <- 0
prodnalim <- 0
total <- prodalim + prodnalim
precosem <- precototal
preçototal <- preçototal + preço

ESTRATEGIA
Enquanto preço maior que 0
Obter o tipo de produto, se o utilizador digitar 1 é alimentar se digitar 2 é nao alimentar
Obter preço do tipo de produto
Se o tipo de produto for alimentar e preço maior que 0 incrementa prodalim e precoiva <- preco * IVAALIM e preçototal <- preçototal + preco
Senao se tipo de produto for nao alimentar e preço maior que 0 incrementa prodnalim e precoiva <- preco * IVANALI e preçototal <- preçototal + preco
Sai do ciclo
Calcular total (total <- prodalim + prodnalim)
Mostra(prodalim, prodnalim, total, precoiva, precosem)

PSEUDOCODIGO
INICIO programa
    IVAALIM <- 0.06
    IVANALIM <- 0.23
    prodalim <- 0
    prodnalim <- 0
    ENQUANTO (PRECO > 0) FAZER
        OBTEM(tipoprod, preco)
        SE (tipoprod == '1') ENTAO
            prodalim <- prodalim + 1
            precoiva <- precoiva + (preco * IVAALIM)
            preçototal <- preçototal + preco
        SENAO
            prodnalim <- preconalim + 1
            precoiva <- precoiva + (preco * IVANALI)
            preçototal <- preçototal + preco
        FIM SE
    FIM ENQUANTO
    total <- prodalim + prodnalim
    MOSTRA(prodalim, prodnalim, total, precoiva, precosem)
FIM programa

*/

// CODIGO EM C //

#include <stdio.h>

void main()
{
    float const ivalim = 0.06;
    float const ivanalim = 0.23;
    float preco=1, precototal=0, precoiva=0, ivatotal=0;
    int prodalim=0, prodnalim=0, total;
    char tipoprod;

    while(preco>0)
    {
        fflush(stdin);
        printf("|| TIPO DE PRODUTO ||\nAlimentar [1] OU Nao Alimentar [2] : ");
        scanf("%c",&tipoprod);
        printf("PRECO: ");
        scanf("%f",&preco);
        printf("\n");
            if(tipoprod == '1')
            {
                prodalim++;
                precototal += preco;
                precoiva += (preco * ivalim);
                ivatotal = precoiva+precototal;
            }
            else if(tipoprod == '2' && preco > 0 )
            {
                prodnalim++;
                precototal += preco;
                precoiva += (preco * ivanalim);
                ivatotal = precoiva+precototal;
            }
        }
    total = prodalim + prodnalim;
    printf("-> Produtos Alimentares %d\n",prodalim);
    printf("-> Produtos Nao Alimentares %d\n",prodnalim);
    printf("-> Total De Produtos %d\n",total);
    printf("-> Preco sem IVA  %.2f\n",precototal);
    printf("-> Preco com IVA  %.2f\n",ivatotal);
}


