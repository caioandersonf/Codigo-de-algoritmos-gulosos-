#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
    int n = 8;
    float total = 0;

    while (n > 0) {
        if (n >= 4) {
            total += 28;
            n -= 4;
        } else if (n >= 3) {
            total += 24;
            n -= 3;
        } else if (n >= 2) {
            total += 18;
            n -= 2;
        } else {
            total += 10;
            n -= 1;
        }
    }

    printf("O menor custo possível para a compra é de R$%.2f\n", total);
    return 0;
}
