#include<stdio.h>
#include<conio.h>
void lcm(int a)
{
	int i=2;
	while(a!=1)
	{
		if(a%i==0)
		{
		printf("%d\t",i);
		a/=i;
		}
		else
		i++;
	}
}
void main()
{
int n,n1;
clrscr();
printf("\nEnter first number:");
scanf("%d",&n);
lcm(n);
printf("\nEnter second number:");
scanf("%d",&n1);
lcm(n1);
getch();
}