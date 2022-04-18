/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
sort an array of elements by dividing the array into two subarrays and combining these subarrays
after sorting each one of them. Your program should also find number of comparisons and
inversions during sorting the array.
*/
#include<stdio.h>
int mergeSort(int A[],int l, int r)
{
    static int comp=0;
if(l<r)
{

int m=l+(r-l)/2;
mergeSort(A,l,m);
mergeSort(A,m+1,r);
comp+=merge(A,l,m,r);
}
return comp;
}

int merge(int A[],int l,int m,int r)
{
    int comp=0;
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2],i;
for(i=0;i<n1;i++)
    L[i]=A[l+i];
for(i=0;i<n2;i++)
    R[i]=A[m+1+i];

    int j,k;
    i=0;j=0;k=l;  //k=0
    while(i<n1 && j<n2)
    {
        comp++;
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
            k++;
        }
        else
        {
            A[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        //comp++;
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        //comp++;
        A[k]=R[j];
        j++;
        k++;
    }
    return comp;
    }

    int countInversions(int A[],int n)
    {
    int i,j,count=0;
    for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            if(A[i]>A[j])
            count++;
        return count;
    }

int main()
{
int n,i,comp,inv,t;
scanf("%d",&t);
while(t>0)
{
//printf("Input array limit: ");
scanf("%d",&n);
int A[n];
//printf("Input array elements: ");
for(i=0;i<n;i++)
scanf("%d",&A[i]);

inv=countInversions(A,n);
comp=mergeSort(A,0,n-1);
for(i=0;i<n;i++)
printf("%d ",A[i]);

printf("\ncomparisons= %d\nInversions= %d",comp,inv);


}
}
