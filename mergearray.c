#include<stdio.h>
void main(){
int ar[20],b[10],i,n,m;
printf("Enter the size of first array:");
scanf("%d",&m);
printf("Enter the size of second array:");
scanf("%d",&n);
printf("Enter elements into first array:");
for(i=0;i<m;++i)
scanf("%d",&ar[i]);
printf("Enter elements into second array:");
for(i=0;i<n;++i)
scanf("%d",&b[i]);
printf("Array1:");
for(i=0;i<m;++i)
printf("%d\t",ar[i]);
printf("\nArray2:");
for(i=0;i<n;++i)
printf("%d\t",b[i]);
for(i=0;i<n;++m,++i)
ar[m]=b[i];
printf("\nMerged Array:");
for(i=0;i<m;++i)
printf("%d\t",ar[i]);
}

