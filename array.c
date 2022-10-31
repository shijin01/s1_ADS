#include<stdio.h>
void main(){
int ar[10],i,n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;++i)
scanf("%d",&ar[i]);
printf("Array:");
for(i=0;i<n;++i)
printf("%d\t",ar[i]);
}

