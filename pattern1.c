#include<stdio.h>
void main()
{
int i,j,k;
for(i=1;i<=4;i++)
{
for(j=i;j<=3;j++)
printf(" ");
for(k=i;k>=1;k--)
printf("%d",i);
printf("\n");
}
}
