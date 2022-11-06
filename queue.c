//Queue using array
#include<stdio.h>
#include<stdlib.h>
int queue[10],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
	int o;
	
	while(1){
		printf("\nMENU:-\n\t1.Enqueue\n\t2.Dequeue\n\t3.Display\nSelect operation: ");
		scanf("%d",&o);
		switch(o){
			case 1:enqueue();
					break;
			case 2:dequeue();
					break;
			case 3:display();
					break;
			case 4:exit(0);
					break;
			default:printf("Invalid input!");
		}
	}
}
void dequeue(){
	if(front==-1 || front>rear)
		printf("Underflow!");
	else{
		printf("%d deleted",queue[front++]);
	}
	//display();
}
void enqueue(){
	if(rear==9)
		printf("Overflow!");
	else{
		if(front==-1 || front>rear)
			front=0;
		printf("\nEnter a number:");
		scanf("%d",&queue[++rear]);
	}
	//display();
}
void display(){
	if(front==-1 || front>rear)printf("No element in stack");
	else{
	printf("\nQueue:");
	for(int i=front;i<=rear;++i)
		printf("%d\t",queue[i]);
}

			
}
			
