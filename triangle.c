#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 Integer Values \n");
scanf("%d %d %d",&a,&b,&c);
if((a*a+b*b)==(c*c)||(c*c+a*a)==(b*b)||(b*b+c*c)==(a*a))
printf("They are the sides of a right-angled triangle \n");
else
printf("Not the sides of a right-angled triangle \n");
}
