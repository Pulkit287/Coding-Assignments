#include<stdio.h>
void main()
{
int a,b;
printf("Enter 2 Nos.\n");
scanf("%d %d",&a,&b);
printf("Old Values: \n a= %d & b= %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nNew Values: \n a= %d & b= %d",a,b);
}

//Swapping Values without using third variable
