#include<stdio.h>
void main()
{
int i,j,k;
for(i=4;i>=1;i--)
{
for(j=i;j<4;j++)
printf(" ");
for(k=1;k<=i;k++)
printf("%d",i);
printf("\n");
}
}
