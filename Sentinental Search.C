#include <stdio.h>
int sentinal(int n,int a[],int s)
{
    int last,i=0;
    last=a[n-1];
    while(a[i]!=s)
    i++;
    a[n-1]=last;
    if(i<n-1 || a[n-1]==s)
    return i;
    else
    return -1;
}
void main()
{
    int n,a[20],i,search,flag=-1;
    printf("enter number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("enter number ");
     scanf("%d",&a[i]);
    }
    printf("enter search ");
    scanf("%d",&search);
    flag=sentinal(n,a,search);
    if(flag!=-1)
    printf("element found at %d",flag+1);
    else
    printf("element not found");
}


//SENTINAL SEARCH
