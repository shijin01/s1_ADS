#include<stdio.h>
void main(){
int ar[10],i,j,n,t;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;++i)
scanf("%d",&ar[i]);
printf("Array:");
for(i=0;i<n;++i)
printf("%d\t",ar[i]);
for(i=1;i<n;++i){
for(j=0;j<n-i;++j){
if(ar[j]>ar[j+1]){
t=ar[j];
ar[j]=ar[j+1];
ar[j+1]=t;
}
}
}
printf("\nSorted Array:");
for(i=0;i<n;++i)
printf("%d\t",ar[i]);
}
