#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f,cn,fn;
	clrscr();
	printf("Enter temperatur in centigrade :");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("Fahrenheit equivalent is :%.1f\n",f);
	printf("Enter temperature  in fahrenheit : ");
	scanf("%f",&fn);
	cn=(fn-32)/1.8;
	printf("centigrade equivalent is: %.1f\n",cn);
	getch();
		}
