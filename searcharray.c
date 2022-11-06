#include<stdio.h>
void main()
{
	int a[5],f=-1,n,i,s;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter elements into array1: ");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
    printf("\nEnter the number to be search:");
	scanf("%d",&s);
    printf("\nArray:");
    for(i=0;i<n;++i)
        printf("%d\t",a[i]);
    for(i=0;i<n;++i){
        if(a[i]==s)
            f=i;
    }
    if(f==-1)
        printf("\n%d not found!",s);
    else
        printf("\n%d founded at position %d",s,f+1);
}