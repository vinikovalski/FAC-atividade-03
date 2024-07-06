#include <stdio.h>

int main() {
    float x, y;
    int result;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    result = (x != y);

    printf("Resultado: %d\n", result);

    return 0;
}
