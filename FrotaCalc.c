#include <stdio.h>

int main(){
    int i = 0;
    int quantidadeMoto = 0, codMoto = 0, qtdTrecho = 0, qtdTrechoTotalInd = 0, trechosBaixa = 0, qtdExc = 0, qtdBom = 0, qtdAdq = 0, qtdSofr = 0, qtdTrechoTotalGer = 0;
    float combPreco = 0, consumoTrecho = 0, kmTrecho = 0, kmTotalInd = 0, combTotalInd = 0, combTrecho = 0, consumoTotalInd = 0, combTotalGer = 0, kmTotalGer = 0, consumoGer = 0, combCusto = 0;


    printf("Informe a quantidade de motoristas: ");
    scanf("%i", &quantidadeMoto);

    printf("Preco do combustivel R$ ");
    scanf("%f", &combPreco);

    while (i < quantidadeMoto){

        kmTotalInd = 0;
        combTotalInd = 0;
        trechosBaixa = 0;

        printf("\nCodigo do motorista: ");
        scanf("%i", &codMoto);
        printf("Quantidade de trechos: ");
        scanf("%i", &qtdTrecho);

        qtdTrechoTotalGer = qtdTrechoTotalGer + qtdTrecho;
        qtdTrechoTotalInd = qtdTrecho;

        while (qtdTrecho >= 1){
            printf("\nDistancia percorrida em Km: ");
            scanf("%f", &kmTrecho);
            while (kmTrecho < 50){
                printf("\nNao foi possivel continuar...\nApenas trechos com mais de 50Km rodados serao aceitos.\n");
                printf("\nDistancia percorrida em Km: ");
                scanf("%f", &kmTrecho);
            }
            kmTotalInd = kmTotalInd + kmTrecho;
            kmTotalGer = kmTotalGer + kmTrecho;

            printf("Quantidade de combustivel utilizada (em litros):");
            scanf("%f", &combTrecho);

            combTotalInd = combTotalInd + combTrecho;
            combTotalGer = combTotalGer + combTrecho;

            consumoTrecho = kmTrecho / combTrecho;

            printf("\n----------------------------------------------------------\n");
            printf("\nMedia de Consumo do Trecho: %.1f km/l\n", consumoTrecho);

            if (consumoTrecho < 10){
                printf("\nBAIXA EFICIENCIA!!\n");
                trechosBaixa = trechosBaixa + 1;
            }
            printf("\n----------------------------------------------------------\n");

        qtdTrecho--;
        }
        consumoTotalInd = kmTotalInd / combTotalInd;
     printf("\n======================== RESUMO DO MOTORISTA ====================\n");
     printf("\nCodigo do Motorista: %i\n", codMoto);
     printf("Quantidade de Trechos Percorridos: %i\n", qtdTrechoTotalInd);
     printf("Distancia Total Percorrida: %.1f Km\n", kmTotalInd);
     printf("Total de Combustivel Consumido: %.0f L\n", combTotalInd);
     printf("Trechos com Baixa Eficiencia: %i \n", trechosBaixa);
     printf("Media de Consumo Total: %.1f km/l\n", consumoTotalInd);
     if (consumoTotalInd > 12){
         printf("Desempenho do Motorista: Excelente\n");
         qtdExc = qtdExc + 1;
     }
     else if (consumoTotalInd > 10){
         printf("Desempenho do Motorista: Bom\n");
         qtdBom = qtdBom + 1;
     }
     else if (consumoTotalInd > 8){
         printf("Desempenho do Motorista: Satisfatorio\n");
         qtdAdq = qtdAdq + 1;
     }
     else{
         printf("Desempenho do Motorista: Sofrivel\n");
         qtdSofr = qtdSofr + 1;
     }
     printf("\n=================================================================\n");


    i++;
    }
    printf("\n\n");
    printf("\n======================== RESUMO GERAL ===========================\n");
    printf("\nTotal de Motoristas: %i\n", quantidadeMoto);
    printf("Total de Trechos Percorridos: %i\n",qtdTrechoTotalGer);
    printf("Total de Km Percorridos: %.1f\n", kmTotalGer);
    printf("Total de Combustivel Consumido: %.0f\n", combTotalGer);

    consumoGer = kmTotalGer / combTotalGer;

    printf("Media de Consumo Geral: %.1f km/l\n", consumoGer);

    combCusto = combPreco * combTotalGer;

    printf("Custo Total de Combustivel: R$ %.2f\n", combCusto);
    if (consumoGer > 12){
         printf("Desempenho Geral: Excelente\n");
     }
     else if (consumoGer > 10){
         printf("Desempenho Geral: Bom\n");
     }
     else if (consumoGer > 8){
         printf("Desempenho Geral: Adequado\n");
     }
     else{
         printf("Desempenho Geral: Sofrivel\n");
     }
     printf("\n");
     printf("Quantidade de Classificacoes \"Excelentes\": %i\n", qtdExc);
     printf("Quantidade de Classificacoes \"Boas\": %i\n", qtdBom);
     printf("Quantidade de Classificacoes \"Adequadas\": %i\n", qtdAdq);
     printf("Quantidade de Classificacoes \"Sofriveis\": %i\n", qtdSofr);
     printf("\n=================================================================\n");

    return 0;
}
