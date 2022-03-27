/*
WAP to implement selection sort and find out total number of comparisons.
*/
#include<stdio.h>
int main()
{
    int ar[20],n,count=0,i,j,temp,min;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(ar[min]>ar[j])
            {
                min=j;
            }
        }
        if(min==i)
        continue;
        else
        {
            temp=ar[min];
            ar[min]=ar[i];
            ar[i]=temp;
            count++;
        }
    }
    printf("sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    printf("total number of comparisons are:%d",count);
}
