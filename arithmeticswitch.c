#include<stdio.h>
void main()
{
char ch;
float a,b;
printf("Enter the operation to be performed +,-,*,/ \n");
scanf(" %c",&ch);
printf("Enter 2 Nos.\n");
scanf("%f %f",&a,&b);
switch (ch)
{
case '+':
printf("Addition= %f \n",a+b);
break;
case '-':
printf("Subtraction= %f \n",a-b);
break;
case '*':
printf("Product= %f \n",a*b);
break;
case '/':
printf("Division= %f \n",a/b);
break;
default:
printf("Invalid Input \n");
}
}
