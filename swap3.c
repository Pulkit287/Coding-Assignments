#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter 2 Nos.\n");
scanf("%d %d",&a,&b);
printf("Old Values: \n a= %d & b= %d",a,b);
//used temp variable
//to swap values
temp=a;
a=b;
b=temp;
printf("\nNew Values: \n a= %d & b= %d  ",a,b);
}

