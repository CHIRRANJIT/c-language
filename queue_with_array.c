#include <stdio.h>
#include <stdlib.h>


int queue[100],rear=-1,front=-1;

int queue_full(int);
int queue_empty();
void enqueue(int,int);
void dequeue();
void display(int);

main()
{
	int size,x,ch;
	printf("\n Enter the limit of the queue(MAX LIMIT :100) : ");
	scanf("%d",&size);
	printf("\nEnter the queue using ARRAY ");
	while(1)
	{
		printf("\n------------------------------------\n");
		printf("\n0.Exit\n1.Insert in Queue\n2.Delete in Queue\n3.Display of values\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				printf("Enter an item : ");
				scanf("%d",&x);
				enqueue(x,size);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display(size);
				break;
		}
	}
}
int queue_full(int size)
{
	if ((front == 0) && (rear == size-1))
		return 1;
	else
		return 0;
}


int queue_empty()
{
	if((front == -1) && (rear == -1))
		return 1;
	else
		return 0;
}


void enqueue(int item,int size)
{
	if (queue_full(size))
		printf("Queue overflow ");
	else
	{
		if (queue_empty())
		{
			front=0;
			rear=0;
		}
		else
			rear+=1;
		queue[rear]=item;
	}
}


void dequeue()
{
	int item;
	if(queue_empty())
		printf("Queue underflow");
	else
	{
		item=queue[front];
		printf("Deleted value is : %d ",item);
		if(rear == front)
		{
			rear=-1;
			front=-1;
		}
		else
			front+=1;
	}
}

void display(int size)
{
	int temp;
	if(queue_empty())
		printf("Queue underflow");
	else
	{
		temp = front;
		while(temp != size)
		{
			printf("%3d->",queue[temp]);
			temp+=1;
		}
	}
}
