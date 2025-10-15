#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");

    float ValorInicial, DepositoMensal, TaxaAnual;
    int QuantidadedeAnos;

    printf("--------------------------------------------\n\n");
    printf("Seja Bem Vindo ao nosso sistema de Juros Compostos!\n Para consultar a sua tabela de investimento prossiga preste as devidas informacoe abaixo.");
    printf("\n--------------------------------------------\n\n");

    printf("Forneca o Valor Inicial - Capital em R$: -->");
    scanf("%f", &ValorInicial);

    printf("Forneca o Valor do Deposito Mensal em R$: --> ");
    scanf("%f", &DepositoMensal);

    printf("Forneca o valor da taxa atual do seu investimento - em porcentagem:-->");
    scanf("%f", &TaxaAnual);

    printf("Digite a quantidade de anos do seu investimento: --> ");
    scanf("%d", &QuantidadedeAnos);

    //taxa mensal: convertida para decimal e multiplicada pela quant. meses.
    double TaxaMensal = (TaxaAnual / 100.0) / 12.0;
    int meses = QuantidadedeAnos * 12;
    float Saldo = ValorInicial;
    float RendimentoAnual = 0.0; 
    //para a soma do rendimento anual é tido como 0; sem soma dos anos anteriores

    printf("======================================\n");
    printf("SUA TABELA ANUAL DE J.C \n");
    printf("============================================\n");
    printf("Valor inicial: R$ %.2f\n", ValorInicial);
    printf("Depósito mensal: R$ %.2f\n", DepositoMensal);
    printf("Taxa de juros anual: %.2f%%\n", TaxaAnual * 100);
    printf("Periodo: %d anos\n", QuantidadedeAnos);
    printf("--------------------------------------------\n\n");

    for (int ano = 1; ano <= QuantidadedeAnos; ano++)
    {
        double SaldoInical = Saldo; // jur ao mes
        RendimentoAnual = 0.0;      //--> rend. zerado

        
        for (int mes = 1; mes <= 12; mes++)
        {
            double rendimento = Saldo * TaxaMensal; // jur ao mes
            Saldo += rendimento;                    // jur app
            Saldo += DepositoMensal;                // add d_mensal
            RendimentoAnual += rendimento;
            // aanl: cada vez q aumenta mensal ele add dnt do msm ano.
        }

        printf("Ano %d\n", ano);
        printf("Saldo: R$ %.2f\n", Saldo);
        printf("Rendimento no ano: R$ %.2f\n", RendimentoAnual);
        printf("--------------------------------------------\n");
    }

    double investimentoTotal = ValorInicial + DepositoMensal * meses; // saida de money
    double jurosTotais = Saldo - investimentoTotal;                   // rend do investimento--

    printf("\n============================================\n");
    printf("RESULTADOS FINAIS\n");
    printf("============================================\n");
    printf("O Investimento total: R$ %.2f\n", investimentoTotal);
    printf("Todos os Juros totais recebidos: R$ %.2f\n", jurosTotais);
    printf("Todo o saldo final R$ %.2f\n", Saldo);
    printf("============================================\n");

    return 0;
}