#include<stdio.h>
void main()
{
float l,b,r,s,h,p;
printf("Enter the length & breadth of Rectangle\n");
scanf("%f %f",&l,&b);
printf("Area= %f\n",l*b);
printf("Enter the side of a square\n");
scanf("%f",&s);
printf("Area= %f\n",s*s);
printf("Enter the radius of a circle\n");
scanf("%f",&r);
printf("Area= %f\n",3.14*r*r);
printf("Enter the height & base of a triangle\n");
scanf("%f %f",&h,&p);
printf("Area= %f\n",0.5*h*p);
}
