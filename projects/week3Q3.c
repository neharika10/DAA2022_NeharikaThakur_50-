/*
WAP to implement insertion sort and total number of comparisons.
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
    for(i=1;i<n;i++)
   {
       temp=ar[i];
       j=i-1;
       while(j>=0&&ar[j]>temp)
       {
           ar[j+1]=ar[j];
           j=j-1;
           count++;
       }
       ar[j+1]=temp;
   }
   for(i=0;i<n;i++)
    {
      printf("%d\n",ar[i]);
    }
   printf("total comparisons are : %d",count) ;
}
