#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0

/** */
int utn_getNumero(int* numero, char* mensajeIn, char* mensajeError, int minimo, int maximo, int reitentos) {

    int scanRet;

    do {
        system("CLS");
        printf("%s", mensajeIn);
        fflush(stdin);
        scanRet = scanf("%d", numero);
        if (scanRet == 0) {
            reitentos--;
            printf("%s", mensajeError);
        } else {
            if (*numero < minimo || *numero > maximo) {
                reitentos--;
                scanRet = 0;
                printf("Numero ingresado fuera del rango minimo (%d) y maximo (%d)\n", minimo, maximo);
                printf("\nPresione una tecla para reintentar...");
                getch();
            }
        }
    } while(scanRet == 0 && reitentos > -1);

    return EXIT_SUCCESS;

}
