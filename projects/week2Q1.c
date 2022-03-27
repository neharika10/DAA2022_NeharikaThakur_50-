/* 
10 March 2022
1)Given an array of sorted intergers containing few duplicate elements to find duplicate element, to find whether the target is present if it is find the number of copy of the target.
*/
//usig binary search

#include<stdio.h>
int main()
{
  int ar[20],key,i,j,count=0,n,flag=0;
  printf("enter size of array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  printf("enter key to be searched\n");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(ar[i]==key)
    {   
      flag++;
      printf("key found at %d position\n",i+1);
      for(j=i;j<n;j++)
      {
        if(ar[j]==key)
        {
          count++;
        }
        else
        {
             printf("key found %d times",count);
              break;
        }
      }
      break;
    }
  }
  if(flag==0)
  {
    printf("key not found");
  }
}
