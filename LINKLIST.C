#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *p;
void display(struct node *head)
{
		struct node *z;
		z=head;
		while(z!=NULL)
		{
			printf("%d\t",z->data);
			z=z->next;
		}
}
void front(struct node *head,int value)
{
		p=(struct node*)malloc(sizeof(struct node));
		p->data=value;
		p->next=head;
		head=p;
display(head);
}
void end(struct node *head,int value)
{
	struct node *b;
	p=(struct node*)malloc(sizeof(struct node));

		p->data=value;
		b=head;
		while(b->next!=NULL)
		{
			b=b->next;
		}
		b->next=p;
		p->next=NULL;
display(head);
}
void middle(struct node *head,int value,int n)
{
	struct node *q;
	int i;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=value;
	q=head;
	for(i=1;i<n;i++)
	{
		q=q->next;
	}
p->next=q->next;
q->next=p;
display(head);
}
int main()
{
	struct node *head=NULL;
	struct node *t;
	int i,n,a;
    //clrscr();
	printf("Enter number of element:");
	scanf("%d",&n);
	if(n==0)
	printf("Linked list is empty");
	else
	{

	for(i=0;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		printf("Enter element:");
		scanf("%d",&p->data);
		if(head==NULL)
		head=p;
		else
		{
			t=head;
			while(t->next!=NULL)
			t=t->next;
			t->next=p;
		}
	}
	printf("\nElement added at begining\n");
	front(head,10);
	printf("\nElement added at End\n");
	end(head,20);
	printf("\nEnter position at which you want to enter the node:");
	scanf("%d",&a);
	middle(head,50,a);
	}
	//getch();
return 0;
}
