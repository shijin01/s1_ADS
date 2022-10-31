#include<stdio.h>
int add(int,int);

void main(){
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("SUM=%d",add(a,b));
}
int add(int a,int b){
int c=a+b;
return c;
}
