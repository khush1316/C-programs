#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,r,j,k,t;
clrscr();
printf("ENter array elements:");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter rotational number:");
scanf("%d",&r);
for(j=0;j<r;j++)
{
	k=a[0];
	for(i=1;i<5;i++)
	{
		a[i-1]=a[i];
	}
	a[4]=k;
}
for(t=0;t<5;t++)
printf("%d\t",a[t]);
getch();
}