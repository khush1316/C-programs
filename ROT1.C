#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,n,t;
printf("ENter elements of the array:\n\n");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the value to with the rotation is done:");
scanf("%d",&n);
for(i=n;i<5;i++)
{
	t=a[i-n];
	a[i-n]=a[i];


