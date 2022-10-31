//stack using array
#include<stdio.h>
int stack[10],top=-1;
void pop();
void push();
void display();
int isempty();
int isfull();
void main()
{
	int o;
	char c;
	do{
		printf("\nSelect operation:\n\t1.Push\n\t2.Pop\n\t3.Display\n\t ");
		scanf("%d",&o);
		switch(o){
			case 1:push();
					break;
			case 2:pop();
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
void pop(){
	if(isempty())
		printf("Underflow!");
	else{
		printf("%d deleted",stack[top--]);
	}
	display();
}
void push(){
	if(isfull())
		printf("Overflow!");
	else{
		printf("\nEnter a number:");
		scanf("%d",&stack[++top]);
	}
	display();
}
void display(){
	if(isempty())printf("No element in stack");
	else{
	printf("\nStack:");
	for(int i=top;i>=0;--i)
		printf("%d\t",stack[i]);
	}

}
int isempty(){
	if(top==-1)
		return 1;
	return 0;
}	
int isfull(){
	if(top==9)
		return 1;
	return 0;
}	
			

			
