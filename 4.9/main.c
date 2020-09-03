
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3,x1, x2;
    printf("Ingresa 3 numero entertos de tres dijitos\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    x1=num1*num2*num3;
    x2=num1+num2+num3;
    printf("\t\tSuma = %d \n\t\tProducto = %d", x2, x1);
    return 0;
}

