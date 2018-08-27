#include <stdio.h>
#include <stdlib.h>

int main() //punto de entrada (funcion mostrar js)
{
    int unNumero1;
    float unNumero2;
    char unCaracter;

    printf("ingrese un numero: ");
    scanf("%d", &unNumero1);
    printf("el numero que ingreso es: %d\n", unNumero1);

    setbuf(stdin,NULL);
    printf("ingrese otro numero: ");
    scanf("%f", &unNumero2);
    printf("el numero que ingreso es: %f\n", unNumero2);

    fflush(stdin);
    printf("ingrese un caracter: ");
    scanf("%c", &unCaracter);
    printf("el caracter que ingreso es: %c\n", unCaracter);

    // fflush(stdin) para linux(solo) y windows:  setbuf(stdin,NULL)



    /*printf("El numero es: %d,\t y el otro numero es: %.1f\n",unNumero1,unNumero2);
    printf("El caracter es %c",unCaracter);
    printf("%d--%d\n",unNumero1,&unNumero1); */

    //scanf("%d",&unCaracter)
    return 0;
}
