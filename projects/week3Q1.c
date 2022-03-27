/*
24 March 2022
WAP to implement bubble sort and find out total number of comparisons.
*/
#include<stdio.h>
int main()
{
    int ar[20],n,count=0,i,j,temp;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
                count++;
            }
        }
    }
    printf("sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    printf("array is sorted in %d comparisons\n",count);
}
