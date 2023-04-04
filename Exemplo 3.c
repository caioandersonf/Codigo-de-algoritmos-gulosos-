#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    double valor;
    double peso;
    double razao;
} Item;

int comparar_razao(const void *a, const void *b) {
    Item *item1 = (Item *)a;
    Item *item2 = (Item *)b;
    if (item2->razao > item1->razao) {
        return 1;
    }
    else if (item2->razao < item1->razao) {
        return -1;
    }
    else {
        return 0;
    }
}

double roubar_mochila(Item *itens, int n, double capacidade) {
    int i;
    double valor_total = 0.0;
    qsort(itens, n, sizeof(Item), comparar_razao);
    for (i = 0; i < n; i++) {
        if (capacidade >= itens[i].peso) {
            valor_total += itens[i].valor;
            capacidade -= itens[i].peso;
        }
        else {
            valor_total += capacidade * itens[i].razao;
            
            break;
        }
    }
    return valor_total;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    Item itens[] = {{4000, 2, 2000}, {1500, 0.5, 3000}, {2000, 1, 2000}, {3000, 1.5, 2000}};
    int n = sizeof(itens) / sizeof(itens[0]);
    double capacidade = 3.0;
    double valor_total = roubar_mochila(itens, n, capacidade);
    
    printf("Levando celular, tablet e câmera.\n" );
    printf("Valor total roubado: R$ %.2f\n", valor_total);
    
    return 0;
}
