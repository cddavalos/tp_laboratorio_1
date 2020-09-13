#define OPERACION_OK 0
#define DIVISION_CERO -1

/** Función sumar
 * Recibe num1 y num2 y realiza la suma. El resultado se devuelve por referencia en pResul
 * Retorna 0 (OK)
 */
int sumar(int num1, int num2, int* pResul) {
    *pResul = num1 + num2;
    return OPERACION_OK;
}

/** Función restar
 * Recibe num1 y num2 y realiza la resta. El resultado se devuelve por referencia en pResul
 * Retorna 0 (OK)
 */
int restar(int num1, int num2, int* pResul) {
    *pResul = num1 - num2;
    return OPERACION_OK;
}

/** Función multiplicar
 * Recibe num1 y num2 y realiza la multiplicación. El resultado se devuelve por referencia en pResul
 * Retorna 0 (OK)
 */
int multiplicar(int num1, int num2, int* pResul) {
    *pResul = num1 * num2;
    return OPERACION_OK;
}

/** Función dividir
 * Recibe num1 y num2 y realiza la division. El resultado se devuelve por referencia en pResul
 * Retorna 0 (OK) / -1 (Error: División por cero)
 */
int dividir(int num1, int num2, float* pResul) {
    int result = OPERACION_OK;
    *pResul = 0;

    if (num2 == 0) {
        result = DIVISION_CERO;
    } else {
        *pResul = num1 / num2;
    }
    return result;
}

/** Función factorial
 * Recibe un num y calcula el factorial.
 * Retorna el valor del factorial
 */
int factorial(int num) {
    int result;
    if (num == 1) {
        return 1;
    }
    result = num * factorial(num - 1);
    return result;
}
