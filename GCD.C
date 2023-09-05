#include<stdio.h>
#include<conio.h>
void gcd(int n,int n1)
{
int t;
	if(n>n1)
	{
	while(n%n1!=0)
	{
		t=n%n1;
		n=n1;
		n1=t;
	}
	printf("G.C.D.= %d",t);
	}
	else
	{
	while(n1%n!=0)
	{
		t=n1%n;
		n1=n;
		n=t;
	}
	printf("G.C.D.= %d",t);
	}
}
void main()
{
int n,n1;
printf("\n\nEnter 1st number:");
scanf("%d",&n);
printf("Enter 2nd number:");
scanf("%d",&n1);
gcd(n,n1);
getch();
}