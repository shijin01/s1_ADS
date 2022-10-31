#include<stdio.h>
void add(int,int);
int c;
void main(){
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
add(a,b);
}
void add(int a,int b){
c=a+b;
printf("SUM=%d",c);
}
