
#include <stdio.h>
#include <stdlib.h>
const float pi=3.141592;
int main() {
    float radio, perimetro, area;
    printf("Introduzca el radio de un circulo\n");
    scanf("%f", &radio);
    if(radio<=0){
        printf("No tiene solucion\n");
    }else{
        perimetro=2*pi*radio;
        area= pi*pow(radio,2);
        printf("La circuferncia es: %f\n", perimetro);
        printf("El area es: %f\n", area);
    }
    return 0;
}

