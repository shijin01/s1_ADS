	#include<stdio.h>
	#include<stdlib.h>
	struct node{
		int data;
		struct node *next;
	}*head=NULL,*cur,*newnode;
	int count();
	int search(int);
	void deleteatbeginning();
	void deleteatend();
	void deleterandom();
	void creation(int data);
	void insertatbeginning();
	void insertatend();
	void insertaftern();
	void display();
	void main(){
		int choice1,data,choice2,s;
		while(1){
			printf("\nEnter Choice:-\n\t1.Insertion\n\t2.Deletion\n\t3.Display\n\t4.Count\n\t5.Search\n\t6.Exit\n:");
			scanf("%d",&choice1);
			switch(choice1){
				case 1:printf("Enter the data:");
					scanf("%d",&data);
					creation(data);
					printf("\n\tEnter Choice:-\n\t\t1.Insert at begin\n\t\t2.Insert at end\n\t\t3.Insert after nth node\n:");
					scanf("%d",&choice2);
					switch(choice2){
						case 1:insertatbeginning();
							break;
						case 2:insertatend();
							break;
						case 3:insertaftern();
							break;
						default:printf("Invalid operation");
					}
					break;
				case 2:printf("\n\tEnter Choice:-\n\t\t1.Deletion at begin\n\t\t2.Deletion at end\n\t\t3.Deletion at position\n:");
					scanf("%d",&choice2);
					switch(choice2){
						case 1:deleteatbeginning();
							break;
						case 2:deleteatend();
							break;
						case 3:deleterandom();
							break;
						default:printf("Invalid operation");
					}
					break;
				case 3:display();
					break;
				case 4:printf("\nNumber of elements:%d",count());
					break;
				case 5:printf("\nEnter the number to be search:");
					scanf("%d",&s);
					(search(s)>0)?printf("\n%d founded at position %d",s,search(s)):printf("%d not found!",s);
					break;
				case 6:exit(0);
					break;
				default:printf("Invalid operation");
			}
		}
	}
	void deleteatbeginning(){
		struct node *t;
		t=head;
		head=head->next;
		free(t);
	}
	void deleteatend(){
		struct node *t,*pre;
		for(cur=head;cur->next!=NULL;pre=cur,cur=cur->next);
		t=cur;
		pre->next=NULL;
		free(t);
		
	}
	void deleterandom(){
		int pos,c,i;
		struct node *pre,*t;
		printf("\nEnter the position:");
		scanf("%d",&pos);
		c=count();
		if(pos>c){
			printf("Invalid position");
		}
		else{
			for(i=1,cur=head;i<pos;++i,pre=cur,cur=cur->next);
			t=pre->next;
			pre->next=cur->next;
			free(t);
		}



	}
	void creation(int data){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=data;
		newnode->next=NULL;
	}
	void insertatbeginning(){
		if(head==NULL){
			newnode->next=NULL;
			head=newnode;

		}
		else{
			newnode->next=head;
			head=newnode;
		}
        }
	void insertatend(){
		for(cur=head;cur->next!=NULL;cur=cur->next);
		cur->next=newnode;
	}
	void display(){
		printf("\nElements:");
		for(cur=head;cur!=NULL;cur=cur->next)
			printf("\t%d",cur->data);	
	}
	int count(){
		int i;
		for(i=0,cur=head;cur!=NULL;++i,cur=cur->next);
		return i;
	}
	void insertaftern(){
		int pos,c,i;
		struct node *pre;
		printf("\nEnter the position:");
		scanf("%d",&pos);
		c=count();
		if(pos>c){
			printf("Invalid position");
		}
		else{
			for(i=1,cur=head;i<pos;++i,pre=cur,cur=cur->next);
			newnode->next=pre->next;
			pre->next=newnode;
		}
	}
	int search(int data){
		int i;
		for(i=1,cur=head;cur!=NULL;++i,cur=cur->next)
			if(cur->data==data)
				return i;
		return 0;
	}
