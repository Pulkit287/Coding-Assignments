#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 2 Nos.\n");
scanf("%d %d",&a,&b);
printf("Old Values: \n a= %d & b= %d",a,b);
c=a;
a=b;
b=c;
printf("\nNew Values: \n a= %d & b= %d  ",a,b);
}

