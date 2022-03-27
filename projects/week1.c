#include<stdio.h>
int main()
{
    int ar[10],n,key,count=0,flag=0,a,b,c;
    printf("enter length of array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    a=0;
    b=n-1;
    c=(a+b)/2;
    printf("enter key to be searched\n");
    scanf("%d",&key);
    while(b>=a)
    {   count++;
        if(ar[c]<key)
        {
            a=c+1;
            c=(a+b)/2;
        }
        else if(ar[c]>key)
        {
            b=c-1;
            c=(a+b)/2;
        }
        else if(ar[c]==key)
        {
          printf("key found in %d rounds",count);  
          flag++;
          break;
        }
    }
    if(flag==0)
    {
        printf("key not found");
    }
}
