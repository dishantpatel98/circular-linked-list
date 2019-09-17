#include<stdio.h>
#include<stdlib.h>


struct node
{
 int data;
 struct node *next;
};
void insertbegan(struct node *);
void insertmid(struct node *);
void display(struct node *);
struct node *head=NULL;
int main()
{
	int choice;
	while(1)
	{
	 
	 printf("1: enter the node at begining\n 2: add node bw two nodes\n 3:add node at the last\n 4: dlt front\n 5:dlt middle\n 6:dlt at end\n7: Display\n");
	 printf("enter choice");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	case 1: 
	      insertbegan(head);
		break;
	case 2:
	     insertmid(head); 
	     break;
	case 3:
	     insertend(head);
	     break;
	case 7:
	     display(head);
	     break;


	 
	 
	 }
	
	
	}






}

void insertend(struct node *temp)
{	int y;
	struct node *t;
 	t=(struct node *)malloc(sizeof(struct node));
	printf("enter the value you want to insert at end\n ");
	scanf("%d",&y);
	t->data=y;
	if(temp==NULL)
	{
	head=t;
	t->next=NULL;
	}
	else
	{
	        while(temp->next!=head)
		{
            		temp=temp->next;
		}
			temp->next=t;
			t->next=head;
	}

}
	
	
	
void insertbegan(struct node *temp)
{       int y;
	struct node *t;
 	t=(struct node *)malloc(sizeof(struct node));
	printf("enter the value that you want to insert\n");
	scanf("%d",&y);
	t->data=y;
	
	if(temp==NULL)
	{
	 head=t;
	 t->next=NULL;
	}
	else
	{
	t->next=head;
	head=t;
	}



}


void insertmid(struct node *temp)
{
     int n,i=1;
     printf("enter the value after which you want to enter the node");
     scanf("%d",&n);
     struct node *t1;
     t1=(struct node *)malloc(sizeof(struct node));
     while(i++<n)
     {
      temp=temp->next;
     }
     printf("enter data");
     scanf("%d",&(t1->data));
     t1->next=temp->next;
     temp->next=t1;

}

void display( struct node *temp)
{   
    
    while(temp!=NULL) 
    {
	    printf("%d\n",temp->data);
	    temp=temp->next;

  }





}
