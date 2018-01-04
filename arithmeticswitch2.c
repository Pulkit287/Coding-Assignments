#include<stdio.h>
#include<math.h>
void main()
{
int ch;
float a,b;
printf("1.Addition\n");
printf("2.Substration\n");
printf("3.Product\n");
printf("4.Divison\n");
printf("5.Percentage\n");
printf("6.Square Root\n");
printf("Enter the operation to be performed \n");
scanf(" %d",&ch);
switch(ch)
{
case 1:
printf("Enter 2 Nos.\n");
scanf("%f %f",&a,&b);
printf("Addition= %f \n",a+b);
break;
case 2:
printf("Enter 2 Nos.\n");
scanf("%f %f",&a,&b);
printf("Subtraction= %f \n",a-b);
break;
case 3:
printf("Enter 2 Nos.\n");
scanf("%f %f",&a,&b);
printf("Product= %f \n",a*b);
break;
case 4:
printf("Enter 2 Nos.\n");
scanf("%f %f",&a,&b);
printf("Division= %f \n",a/b);
break;
case 5:
printf("Enter marks out of 100\n");
scanf("%f",&a);
printf("Percentage= %f \n",(a/100.0));
break;
case 6:
printf("Enter a No. \n");
scanf("%f",&a);
printf("Square Root= %f \n",sqrt(a));
break;
default:
printf("Invalid Input \n");
}
}
