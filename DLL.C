#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
typedef struct node node;
node* head=NULL;
void display()
{
	node *q,*p;
	q=head;
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		q=q->next;
	}
}
void beg(int val)
{
node *p;
	p=(node*)malloc(sizeof(node));

	p->next=head;
	p->data=val;
	head=p;
	p->prev=NULL;

}
void end(int val)
{
 node *q,*p;

	p=(node*)malloc(sizeof(node));

	p->data=val;
	q=head;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;
	p->prev=q;
	p->next=NULL;
}
void middle(int val,int n)
{
int i;
node *q,*p;

	p=(node*)malloc(sizeof(node));
	p->data=val;
	q=head;

	for(i=1;i<n;i++)
	q=q->next;

	p->next=q->next;
	q->next=p;
	p->prev=q;

}
void create(int val)
{
node *q,*p;
	p=(node*)malloc(sizeof(node));

	p->data=val;
	q=head;
	if(head==NULL)
	{
		head=q=p;
		q->prev=NULL;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->prev=q;
		q=p;
		q->next=NULL;
	}
}
int count()
{
node *q;
	int c=0;
	q=head;
	while(q!=NULL)
	{
		q=q->next;
		c++;
	}
return c;
}
void main()
{
int i,n,a,b,c,d,e,m;
clrscr();
printf("\nEnter number of node you want to insert:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nEnter number:");
	scanf("%d",&a);
	create(a);
}

printf("\nEnter number to be inserted at the beginning:");
scanf("%d",&b);
beg(b);
display();

printf("\nEnter number to be inserted at the last:");
scanf("%d",&c);
end(c);
display();

m=count();
printf("\nEnter position at which you want to insert:");
scanf("%d",&d);

if(d>1 && d<m)
{
printf("\nEnter number to be inserted at the position %d:",d);
scanf("%d",&e);
middle(e,d);
display();
}
else
printf("Position is incorrect");

getch();
}