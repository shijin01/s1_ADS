#include<stdio.h>
int add();
int a,b;
void main(){
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("SUM=%d",add());

}
int add(){
int c=a+b;
return c;
}
