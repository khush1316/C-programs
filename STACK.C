#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
void push(int x)
{
	struct stack *p;
	p=(struct stack*)malloc(sizeof(struct stack));

	p->data=x;
	if(top==NULL)
	{
		top=p;
		p->next=NULL;
	}
	else
	{
		p->next=top;
		top=p;
	}
}
void pop()
{
	struct stack *q;

	q=top;
	if(top==NULL)
	printf("Stack is empty");
	else
	{
		printf("Poped data is %d",top->data);
		top=top->next;
		free(q);
	}
}
void display()
{
	struct stack *q;

	q=top;

	if(top==NULL)
	printf("Stack is empty");
	else
	{
		while(q!=NULL)
		{
			printf("%d\t",q->data);
			q=q->next;
		}
	}
}
void main()
{
	int n,i,x,c,a;
	clrscr();
	printf("Number of element in stack-");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	printf("Enter stack element:");
	scanf("%d",&x);
	push(x);
	}
	display();
	printf("\n");
	printf("Enter element to push:");
	scanf("%d",&x);
	push(x);
	display();
	printf("\n");
	pop();
	display();

getch();
}