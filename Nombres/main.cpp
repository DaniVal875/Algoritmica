#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20];
    char apellido[20];

    printf("Introduzcan su nombre:");
    scanf("%s", nombre);
    printf("Introduzcan su apellido:");
    scanf("%s", apellido);
    printf("Hola %s %s, buenos d%cas.", nombre, apellido, 161);

    getch(); /* Pausa */
    return 0;
}
