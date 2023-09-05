#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node *root=0;
struct node *create()
{
	int x;
	struct node *p;

	p=(struct node*)malloc(sizeof(struct node));

	printf("\n\nEnter Data(-1 for NO NODE) :");
	scanf("%d",&x);
	if(x==-1)
	return 0;

	p->data=x;

	printf("\nEnter left of %d",x);
	p->left=create();
	printf("\nEnter right of %d",x);
	p->right=create();

	return p;
}
void preorder(struct node *q)
{
	if(q==0)
	return ;
	else
	{
	printf("  %d",q->data);
	preorder(q->left);
	preorder(q->right);
	}
}
void postorder(struct node *q)
{
    if(q==0)
        return;
    else
    {
        postorder(q->left);
        postorder(q->right);
        printf("  %d",q->data);
    }
}
void inoreder(struct node *q)
{

    if(q==0)
        return;
    else
    {
        inorder(q->left);
        printf("  %d",q->data);
        inorder(q->right);
    }
}
int main()
{
	root=create();
	preorder(root);
return 0;
}

