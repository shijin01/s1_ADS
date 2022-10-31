//Queue using array
#include<stdio.h>
int queue[10],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
int isempty();
int isfull();
void main()
{
	int o;
	char c;
	do{
		printf("\nSelect operation:\n\t1.Enqueue\n\t2.Dequeue\n\t3.Display\n\t ");
		scanf("%d",&o);
		switch(o){
			case 1:enqueue();
					break;
			case 2:dequeue();
					break;
			case 3:display();
					break;
			default:printf("Invalid input!");
		}
	printf("\nDo you want to continue?(y/n) :");
	scanf("%s",&c);
	//printf("c=%c",c);
	}while(c=='y');
}
void dequeue(){
	if(isempty())
		printf("Underflow!");
	else{
		printf("%d deleted",queue[front++]);
	}
	//display();
}
void enqueue(){
	if(isfull())
		printf("Overflow!");
	else{
		if(isempty())
			front=0;
		printf("\nEnter a number:");
		scanf("%d",&queue[++rear]);
	}
	//display();
}
void display(){
	if(isempty())printf("No element in stack");
	else{
	printf("\nQueue:");
	for(int i=front;i<=rear;++i)
		printf("%d\t",queue[i]);
}

}
int isempty(){
	if(front==-1 || front>rear)
		return 1;
	return 0;
}	
int isfull(){
	if(rear==9)
		return 1;
	return 0;
}	
			

			
