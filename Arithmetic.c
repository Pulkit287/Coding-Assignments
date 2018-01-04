#include<stdio.h>
void main()
{
int a,b,add,sub,prod,div;
float divi;
printf("Enter 2 Integers\n");
scanf("%d %d",&a,&b);
add=a+b;
sub=a-b;
prod=a*b;
div=a/b;
printf("Addition= %d \nSubtraction= %d\nProduct= %d\nDivision= %d\n",add,sub,prod,div);
divi=(1.0*a)/b;
printf("Division in Float= %f",divi);
}
