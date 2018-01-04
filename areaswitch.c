#include<stdio.h>
void main()
{
int ch;
float l,b,s,r,h,p;
printf("1.Rectangle\n");
printf("2.Square\n");
printf("3.Circle\n");
printf("4.Triangle\n");
printf("Enter your Choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the length & breadth of Rectangle\n");
scanf("%f %f",&l,&b);
printf("Area= %f\n",l*b);
break;
case 2:
printf("Enter the side of a square\n");
scanf("%f",&s);
printf("Area= %f\n",s*s);
break;
case 3:
printf("Enter the radius of a circle\n");
scanf("%f",&r);
printf("Area= %f\n",3.14*r*r);
break;
case 4:
printf("Enter the height & base of a triangle\n");
scanf("%f %f",&h,&p);
printf("Area= %f\n",0.5*h*p);
break;
default:
printf("Invalid Input");
}
}
