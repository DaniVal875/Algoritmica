#include <conio.h>
#include <stdio.h>

int main()
{
  int caso,num1,num2,res;
  printf("Cual de las Opciones deseas: \n 1-Suma \n 2-Resta \n");
  scanf("%d",&caso);
  switch(caso)
  {
  case 1:
  printf("Dame el primer numero a sumar: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero a sumar: ");
  scanf("%d",&num2);
  res=num1+num2;
  printf("El resultado es: %d",res);
  break;

 case 2:
  printf("Dame el primer numero a restar: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero a restar: ");
  scanf("%d",&num2);
  res=num1-num2;
  printf("El resultado es: %d",res);
  break;
}
return 0;
}