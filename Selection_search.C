#include<stdio.h>
void main()
{
    int i,j,min,n,a[20],temp;
    printf("enter number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("\nSorted Array\n ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
}

//SELECTION SORT
