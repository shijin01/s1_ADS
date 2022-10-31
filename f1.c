#include<stdio.h>
void add();
int a,b,c;
void main(){
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
add();
}
void add(){
c=a+b;
printf("SUM=%d",c);
}
