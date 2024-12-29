#include <stdio.h>

int main (int argc, char *argv[]) {
    int contador = 0;
    float suma_diametros = 0;
    float suma_alturas = 0;
    char respuesta = 'S';

    printf("Ahora vamos a regristar los datos\n");

    
    do {
        float diametro, altura;

        
        printf("Ingresa el diametro del tronco en cm: ");
        scanf("%f", &diametro);
        printf("Ingresa la altura del cipres en metros: ");
        scanf("%f", &altura);

    
        suma_diametros += diametro;
        suma_alturas += altura;
        contador++;

        
        printf("Va a registrar otro cipres? (S/N): ");
        scanf(" %c", &respuesta);
        
        
        if (respuesta >= 'a' && respuesta <= 'z') {
            respuesta -= 32;
        }
    } while (respuesta == 'S');


    if (contador > 0) {
        float promedio_diametros = suma_diametros / contador;
        float promedio_alturas = suma_alturas / contador;

    
        printf("\nResultados finales:\n");
        printf("Promedio de diametros: %.2f cm\n", promedio_diametros);
        printf("Promedio de alturas: %.2f metros\n", promedio_alturas);
    } else {
        printf("No se registraron datos.\n");
    }

    return 0;
}
