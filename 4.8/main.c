
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const float pi= 3.141592;

int main() {
    float radio, altura, hipot,area, volumen;
    printf("Ingresa  el radio y la altura\n");
    scanf("%f %f", &radio, &altura);
    if((radio<=0) || altura<=0){
        printf("No tiene solucion\n");
    }else{
        hipot=sqrt(pow(radio,2)+pow(altura,2));
        area=pi*radio*hipot;
        volumen= (pow(radio,2)*altura*pi)/3;
        printf("Area: %f\n", area);
        printf("Volumen: %f\n", volumen);
    }
    return 0;
}

