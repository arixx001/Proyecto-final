#include <stdio.h>

int main (int argc, char *argv[]) {
    int numero, pares = 0, impares = 0;

    printf("Ingrese varios numeros y si desea finalizar ingrese un numero negativo\n");

    do {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero > 0) { 
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    } while (numero >= 0); 

   
    printf("Total de pares: %d\n", pares);
    printf("Total de impares: %d\n", impares);

    return 0;
}