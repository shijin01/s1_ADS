/* a1=1 2 3 4
a2= 5 6 7 8 
merge=1 5 2 6 3 7 4 8 */
#include<stdio.h>
void main(){
int ar[10],b[10],c[20],i,n,m,j;
printf("Enter the size of array:");
scanf("%d",&m);
/* printf("Enter the size of second array:");
scanf("%d",&n);*/
printf("Enter elements into first array:");
for(i=0;i<m;++i)
scanf("%d",&ar[i]);
printf("Enter elements into second array:");
for(i=0;i<m;++i)
scanf("%d",&b[i]);
printf("Array1:");
for(i=0;i<m;++i)
printf("%d\t",ar[i]);
printf("\nArray2:");
for(i=0;i<m;++i)
printf("%d\t",b[i]);
for(i=0,j=0;i<m;++i,++j){
c[j]=ar[i];
c[++j]=b[i];
}
printf("\nMerged Array:");
for(i=0;i<m+m;++i)
printf("%d\t",c[i]);
} 
