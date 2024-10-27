#include <stdio.h>

int main() {
    char operador;
    float num1, num2;

    // Solicitar la operación y los números
    printf("Ingrese una operación (+, -, *, /): ");
    scanf(" %c", &operador);  // Espacio antes de %c para evitar problemas con el buffer

    printf("Ingrese dos números: ");
    scanf("%f %f", &num1, &num2);

    // Usar if para cada operación
    if (operador == '+')
        printf("Resultado: %.2f\n", num1 + num2);
    else if (operador == '-')
        printf("Resultado: %.2f\n", num1 - num2);
    else if (operador == '*')
        printf("Resultado: %.2f\n", num1 * num2);
    else if (operador == '/')
        if (num2 != 0)
            printf("Resultado: %.2f\n", num1 / num2);
        else
            printf("Error: División por cero\n");
    else
        printf("Operación no válida\n");

    return 0;
}