#include <stdio.h>

int main() {
    float HT, VH, PD, SB, TD, SL;

    printf("Digite as horas trabalhadas no mês: ");
    scanf("%f", &HT);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &VH);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &PD);

    SB = HT * VH;

    TD = (PD / 100) * SB;

    SL = SB - TD;

    printf("Horas Trabalhadas: %.2f\n", HT);
    printf("Salario Bruto: R$ %.2f\n", SB);
    printf("Desconto: R$ %.2f\n", TD);
    printf("Salario Liquido: R$ %.2f\n", SL);

    return 0;
}
