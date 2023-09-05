#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void create(int n)
{
struct node *p,*q;

	p=(struct node*)malloc(sizeof(struct node));
	p->data=n;

	q=head;
	if(head==NULL)
	{
	head=p;
	p->next=NULL;
	}

	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->next=NULL;
	}
}
void display()
{
	struct node *q;

	q=head;
	while(q!=NULL)
	{
	printf("%d \t",q->data);
	q=q->next;
	}
}
void delbeg()
{
struct node *q;
q=head;

head=q->next;

free(q);
}
void delint(int n)
{
struct node *q,*p;
int i;
q=head;
for(i=1;i<n-1;i++)
{
	q=q->next;
}
p=q->next;
q->next=p->next;
free(p);
}
void delend()
{
struct node *q,*p;
q=head;
while(q->next!=NULL)
{
	p=q;
	q=q->next;
}
p->next=NULL;
free(q);
}
void main()
{
int i,n,a,b;
clrscr();
printf("Enter number of nodes:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("Enter data:");
	scanf("%d",&a);
	create(a);
}
display();
printf("\n");
delbeg();
display();
printf("\n");
printf("\nEnter position you want to delete:");
scanf("%d",&b);
delint(b);
display();
printf("\n");
delend();
display();
getch();
}