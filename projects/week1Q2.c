/*
Given a sorted array of positive integers, design an alogrithm and implement it using a program 
to find whether key element is present or not. Also find number of comparisons.
*/
#include<stdio.h>
int main()
{
    int n,i,l,r,k,m,comp=0,flag=0;
    printf("Please input array limit: ");
    scanf("%d",&n);
    int a[n];
    printf("Please input array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Please input key to search: ");
        scanf("%d",&k);
    l=0;
    r=n-1;
    while(l<=r)
    {
        comp++;
        m=l+(r-l)/2;
        if(a[m]==k)
            {
                printf("Key Found at index %d. ",m);
                flag=1;
                break;
            }
            else if(a[m]>k)
                r=m-1;
            else
                l=m+1;
    }
    if(flag==0)
        printf("Key not found.");
    printf("\nTotal comparisons made: %d\n",comp);
}
