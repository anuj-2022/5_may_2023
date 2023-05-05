#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void create(void);
void display(void);
void insert_bigg(void);
struct node
{
	int data;
	struct node* next;
};
struct node *head;


void main()
{

	create();
	display();
	insert_bigg();
	display();
	free(head);
}

void create(void)
{
	struct node *tmp,*curr;
	int i,d,n;
	head=(struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("failed to allocate the memory \n");
//		return 0;
	}
	printf("Please enter the length and data \n");
	scanf("%d%d",&n,&d);
	head->data=d;
	head->next=NULL;
	tmp=head;
	for(i=2;i<=n;i++)
	{
		curr=(struct node*)malloc(sizeof(struct node));
		if(curr == NULL)
        	{
                printf("failed to allocate the memory \n");
//                return 0;
        	}
		printf("Enter the data for node %d :\n",i);
		scanf("%d",&d);
		curr->data=d;
		curr->next=NULL;
		tmp->next=curr;
		tmp=curr;
	}
}

void display(void)
{
	struct node *tmp;
	tmp=head;
	while(tmp!= NULL)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->next;
	}
	printf("\n");
//	free(head);
}

void insert_bigg(void)
{
	struct node *tmp;
//	tmp = head;
	tmp=(struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
        {
            printf("failed to allocate the memory \n");
//          return 0;
        }

	printf("enter the data\n");
	scanf("%d",&tmp->data);
	tmp->next=head;
	head=tmp;
}
