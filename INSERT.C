#include<stdio.h>
#include<conio.h>
void insert(int a[5],int n,int b,int m)
{
int i,t;
t=a[m-1];
	for(i=m-1;i>=n;i--)
	{
	a[i]=a[i-1];
	}
	a[n-1]=b;
	a[m]=t;
printf("New array----->\n\n");
for(i=0;i<m+1;i++)
printf("%d\t",a[i]);
}
void main()
{
int a[50],n,b,i,m;
clrscr();
printf("Enter size of the array:");
scanf("%d",&m);
printf("ENter numbers:");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("ENter number you want to insert:");
scanf("%d",&b);
printf("Enter position at which you want to insert:");
scanf("%d",&n);
insert(a,n,b,m);
getch();
}