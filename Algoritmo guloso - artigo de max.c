#include <stdio.h>

void calcularTroco(float totalCompra, float dinheiroPago);

int main()
{
    float totalCompra = 89.75;
    float dinheiroPago = 100.0;

    calcularTroco(totalCompra, dinheiroPago);

    return 0;
}

void calcularTroco(float totalCompra, float dinheiroPago)
{
    int notasCinco = 3, notasDois = 5;
    int moedasCinco = 5, moedasDez = 2, moedasUm = 5;
    float troco = dinheiroPago - totalCompra;

    printf("Troco a ser devolvido: R$%.2f\n", troco);

    if (troco <= 0)
    {
        printf("Nao ha troco a ser devolvido!\n");
        return;
    }

    printf("Notas e moedas a serem devolvidas:\n");

    while (troco >= 5.0 && notasCinco > 0)
    {
        printf("R$5,00\n");
        troco -= 5.0;
        notasCinco--;
    }

    while (troco >= 2.0 && notasDois > 0)
    {
        printf("R$2,00\n");
        troco -= 2.0;
        notasDois--;
    }

    while (troco >= 0.1 && moedasDez > 0)
    {
        printf("R$0,10\n");
        troco -= 0.1;
        moedasDez--;
    }

    while (troco >= 0.05 && moedasCinco > 0)
    {
        printf("R$0,05\n");
        troco -= 0.05;
        moedasCinco--;
    }

    while (troco >= 0.01 && moedasUm > 0)
    {
        printf("R$0,01\n");
        troco -= 0.01;
        moedasUm--;
    }
}
