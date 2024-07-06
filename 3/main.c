#include <stdio.h>

int main() {
    double KmH, Ms;
    printf("Digite a velocidade em Km/h: ");
    scanf("%lf", &KmH);

    Ms = KmH / 3.6;

    printf("A velocidade em m/s é: %.2lf\n", Ms);

    return 0;
}
