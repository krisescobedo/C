#include <stdio.h>
#include <stdlib.h>
/*Ingresar 5 numeros y calcular su media */
int main()
{
    int numero;
    int numeroAcum=0;
    int numeroCont=0;
    float promedio=0;

    for (int x=0;x<5;x++)
    {
        printf("Introducir un numero");
        scanf("%d", &numero);
        fflush(stdin);

        numeroAcum+=numero;
        numeroCont++;
    }
    promedio=(float)numeroAcum/numeroCont;

    printf("El promedio de los numeros es %f", promedio);
    return 0;
}

