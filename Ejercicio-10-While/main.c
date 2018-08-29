
#include <stdio.h>
#include <stdlib.h>

/* Al presionar el botón pedir números hasta que el usuario
quiera, mostrar:
1-Suma de los negativos. 2-Suma de los positivos.
3-Cantidad de positivos.
4-Cantidad de negativos. 5-Cantidad de ceros.
6-Cantidad de números pares.
7-Promedio de positivos. 8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos).
*/

int main()
{
    int numero;
    char respuesta;
    int positivoAcumulador=0;
    int positivoContador=0;
    int negativoContador=0;
    int negativoAcumulador=0;
    int cerosContador=0;
    int paresCont=0;
    float positivosPromedio;
    float negativosPromedio;


    for (int x=0;x<5;x++)
    {
        printf("Introducir un numero");
        scanf("%d", &numero);
        fflush(stdin);

        if (numero>0)
        {
            positivoContador++;
            positivoAcumulador = positivoAcumulador+numero;
        }
        else
        {
            if (numero<0)
            {
            negativoContador++;
            negativoAcumulador+=numero;
            }
            else
            {
            cerosContador++;
            }

        }
        //numeros pares
        if (numero%2==0)
        {
            paresCont++;
        }




      //  printf("desea introducir otro numero? s/n");
      //  scanf("%c", &respuesta);


    }

    positivosPromedio=(float)positivoAcumulador/positivoContador;
    negativosPromedio=(float)negativoAcumulador/negativoContador;

    printf("la suma de los numeros negativos es: %d\n", negativoAcumulador);
    printf("la suma de numeros positivos es: %d\n", positivoAcumulador);
    printf("la cantidad de numeros postivos es: %d\n", positivoContador);
    printf("la cantidad de numeros negativos es: %d\n", negativoContador);
    printf("la cantidad de ceros es: %d\n", cerosContador);
    printf("la cantidad de numeros pares es: %d\n", paresCont);
    printf("el promedio de positivos es: %.2f\n", positivosPromedio);
    printf("el promedio de negativos es: %.2f\n", negativosPromedio);

    return 0;
}
