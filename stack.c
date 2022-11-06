//stack using array
#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1;
void pop();
void push();
void display();
void main()
{
	int o;
	while(1){
		printf("\nMENU:-\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\nSelect operation: ");
		scanf("%d",&o);
		switch(o){
			case 1:push();
					break;
			case 2:pop();
					break;
			case 3:display();
					break;
			case 4:exit(0);
					break;
			default:printf("Invalid input!");
		}
	//printf("c=%c",c);
	}
}
void pop(){
	if(top==-1)
		printf("Underflow!");
	else{
		printf("%d deleted",stack[top--]);
	}
	
}
void push(){
	if(top==9)
		printf("Overflow!");
	else{
		printf("\nEnter data:");
		scanf("%d",&stack[++top]);
	}
	
}
void display(){
	if(top==-1)
		printf("No element in stack");
	else{
	printf("\nStack:");
	for(int i=top;i>=0;--i)
		printf("%d\t",stack[i]);
	}

}

			

			
