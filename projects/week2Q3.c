#include<stdio.h>
int main()
{
  int ar[20],i,j,k,n,count=0,flag=0;
  printf("enter length of array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      for(k=j+1;k<n;k++)
      {
        if(ar[i]+ar[j]==ar[k])
        {
          flag++;
          count++;
          printf("%d pair is of index %d and %d resulting to %d\n",count,i,j,k);

          }
        }
      }
    }

  if(flag==0)
  {
    printf("no pair found\n");
  }
}
