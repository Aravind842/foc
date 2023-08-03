#include<stdio.h>
#include<conio.h>
int maximum(int,int,int);
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Maximum is: %d\n",maximum(a,b,c));
	getch();
}
int maximum(int x,inty,intz)
{
	int max=x;
	if(y>max)
	if(z>max)
	max=z;
	return max;
}
