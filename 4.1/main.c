#include <stdio.h>
#include <stdlib.h>

int main() {
    float C, F=1.8;
    printf("Introduzca la temperatura en grados Celsius\n");
    scanf("%f", &C);
    F=F*C+32;
    printf("Grados:\n");
    printf("Celsius: %.2f\n", C);
    printf("Fahrenheit: %.2f\n", F);
    return 0;
}
