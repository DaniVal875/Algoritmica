#include <stdio.h>

int main()
{
    int caso, num1, num2, res;
    char opc;
    
    
    printf("Cual es la opcion que deseas: \n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Divicion \n");
    scanf("%d", &caso);
    switch(caso)
    {
    case 1:
    printf("Dame el primer dijito: ");
    scanf("%d", &num1);
    printf("Dame el segundo dijito: ");
    scanf("%d", &num2);
    res=num1+num2;
    printf("El resultado es: %d",res);
    break;
    
    
    case 2:
    printf("Dame el primer dijito: ");
    scanf("%d", &num1);
    printf("Dame el segundo dijito: ");
    scanf("%d", &num2);
    res=num1-num2;
    printf("El resultado es: %d",res);
    break;
    
    
    case 3:
    printf("Dame el primer dijito: ");
    scanf("%d", &num1);
    printf("Dame el segundo dijito: ");
    scanf("%d", &num2);
    res=num1*num2;
    printf("El resultado es: %d",res);
    break;
    
    
    case 4:
    printf("Dame el primer dijito: ");
    scanf("%d", &num1);
    printf("Dame el segundo dijito: ");
    scanf("%d", &num2);
    res=num1/num2;
    printf("El resultado es: %d",res);
    break;
    }
}
