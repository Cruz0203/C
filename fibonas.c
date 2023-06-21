#include <stdio.h>

void fibas(int n, int x, int y, int count) {
    if (count > n) {
        return;
    }

    printf("%d - ", x);
    fibas(n, y, x + y, count + 1);
}

int main() {
    int s;
    printf("Quantos n�meros voc� deseja visualizar? ");
    scanf("%d", &s);

    printf("Sequ�ncia de Fibonacci: ");
    fibas(s, 1, 1, 1);

    return 0;
}
