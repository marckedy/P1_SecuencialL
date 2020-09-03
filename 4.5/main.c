#include <stdio.h>
#include <stdlib.h>


int main () {
    
    int num1, num2, num3;
    
    printf("Ingresa 3 numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1>num2){
        if(num1>num3){
            printf("%d es el numero mayor\n", num1);
            if(num3>num2){
                printf("%d es el segundo numero\n", num3);
                printf("%d es el numero menor\n", num2);
            }else{
                printf("%d es el segunfo menor\n", num2);
                printf("%d es el numero menor\n", num3);
            }
        }else{
            printf("%d es el numero mayor\n", num3);
            if(num1>num2){
                printf("%d es el segundo menor\n", num1);
                printf("%d es el numero menor\n", num2);
            }else{
                printf("%d es el segundo menor\n", num2);
                printf("%d es el numero menor\n", num1);
            }
        }
    }else
        if(num2>num3){
            printf("%d es el numero mayor\n", num2);
            if(num3>num1){
                printf("%d es el segundo numero\n", num3);
                printf("%d es el numero menor\n", num1);
            }else{
                printf("%d es el segundo numero\n", num1);
                printf("%d es el numero menor\n", num3);
            }
                  
        }else{
            printf("%d es el numero mayor\n", num3);
            printf("%d es el segundo numero\n", num2);
            printf("%d es el numero menor\n", num1);
        }
    return 0;
}

