
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    float media;
    printf("Ingresa 3 numeros\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    media= (num1+num2+num3)/3.0;
    printf("La media es %.3f", media);
    return 0;
}

