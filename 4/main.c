#include <stdio.h>

int main() {
    double dividendo, divisor, quociente, resto;

    printf("Digite o dividendo (numero real): ");
    scanf("%lf", &dividendo);
    printf("Digite o divisor (numero real): ");
    scanf("%lf", &divisor);

    if(divisor == 0) {
        printf("Erro: Divisão por zero nao e permitida.\n");
        return 1;
    }

    quociente = dividendo / divisor;
    resto = (int)dividendo % (int)divisor;

    printf("Dividendo: %.2lf\n", dividendo);
    printf("Divisor: %.2lf\n", divisor);
    printf("Quociente: %.2lf\n", quociente);
    printf("Resto: %.2lf\n", resto);

    return 0;
}
