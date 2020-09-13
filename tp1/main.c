#include <stdio.h>
#include <conio.h>

#include "utn.h"
#include "operaciones.h"

int main(void) {

    int opcion, num1 = -1, num2 = -1;
    int resDiv, resFac1, resFac2;
    int resulSuma, resulResta, resulMulti;
    float resulDiv;
    int opcion4ok = 0;

    do {

        char menu[600] = "1. Ingresar 1er operando (A=x)\n2. Ingresar 2do operando (B=y)\n3. Calcular todas las operaciones\na) Calcular la suma (A+B)\nb) Calcular la resta (A-B)\nc) Calcular la division (A/B)\nd) Calcular la multiplicacion (A*B)\ne) Calcular el factorial (A!)\n4. Informar resultados\na) \"El resultado de A+B es: r\"\nb) \"El resultado de A-B es: r\"\nc) \"El resultado de A/B es: r\" o \"No es posible dividir por cero\"\nd) \"El resultado de A*B es: r\"\ne) \"El factorial de A es: r1 y El factorial de B es: r2\"\n5. Salir\n\nElija una opcion: \0";
        char mensaje[100] = "No es una opcion correcta";
        utn_getNumero(&opcion, menu, mensaje, 1, 5, 2);

        switch (opcion) {
        case 1:
            utn_getNumero(&num1, "Ingresar 1er operando: ", "Valor ingresado incorrecto", 0, 10, 2);
            break;
        case 2:
            utn_getNumero(&num2, "Ingresar 2do operando: ", "Valor ingresado incorrecto", 0, 10, 2);
            break;
        case 3:
            if (num1 == -1 || num2 == -1) {
                printf("\nAntes de realizar el calculo debe ingresar los operandos (opcion 1 y 2)");
            } else {
                sumar(num1, num2, &resulSuma);
                restar(num1, num2, &resulResta);
                multiplicar(num1, num2, &resulMulti);
                resDiv = dividir(num1, num2, &resulDiv);
                resFac1 = factorial(num1);
                resFac2 = factorial(num2);
                opcion4ok = 1;
                printf("\nCalculos realizados!");
            }
            printf("\n\nPresione una tecla para volver al menu...");
            getch();
            break;
        case 4:
            if (!opcion4ok) {
                printf("Debe realizar el calculo de las operaciones primero (opcion 3)");
            } else {
                printf("a) \"El resultado de A+B es: %d\"\n", resulSuma);
                printf("b) \"El resultado de A-B es: %d\"\n", resulResta);
                if (resDiv == -1) {
                    printf("c) \"No es posible dividir por cero\"\n");
                } else {
                    printf("c) \"El resultado de A/B es: %.3f\n", resulDiv);
                }
                printf("d) \"El resultado de A*B es: %d\"\n", resulMulti);
                printf("e) \"El factorial de A es: %d y El factorial de B es: %d\"\n", resFac1, resFac2);
            }
            printf("\nPresione una tecla para volver al menu...");
            getch();
        }

    } while(opcion != 5);

    return 0;

}
