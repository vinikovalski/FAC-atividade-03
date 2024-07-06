#include <stdio.h>

int main() {
    double F, C;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &F);

    C = (F - 32) * (5.0 / 9.0);

    printf("A temperatura em Celsius: %.2lf\n", C);

    return 0;
}
