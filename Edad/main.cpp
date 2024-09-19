#include <stdio.h>

int main() {
    int ano_nacimiento, mes_nacimiento, dia_nacimiento;
    int ano_actual = 2024;
    int mes_actual = 9;
    int dia_actual = 18;
    float edad;
    
    
    printf("Introduce tu día de nacimiento: ");
    scanf("%d", &dia_nacimiento);
    
    printf("Introduce tu mes de nacimiento: ");
    scanf("%d", &mes_nacimiento);

    printf("Introduce tu ano de nacimiento: ");
    scanf("%d", &ano_nacimiento);


    float fecha_actual = ano_actual + (mes_actual / 12.0) + (dia_actual / 365.0);
    float fecha_nacimiento = ano_nacimiento + (mes_nacimiento / 12.0) + (dia_nacimiento / 365.0);

    edad = fecha_actual - fecha_nacimiento;

    printf("Tienes %f años\n", edad);

    return 0;
}