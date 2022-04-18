/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
sort an array of elements by partitioning the array into two subarrays based on a pivot element
such that one of the sub array holds values smaller than the pivot element while another sub
array holds values greater than the pivot element. Pivot element should be selected randomly
from the array. Your program should also find number of comparisons and swaps required for
sorting the array.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int Partition(int A[],int low,int high)
{
    int random=low+rand()%(high-low),temp;
    temp=A[random];
    A[random]=A[high];
    A[high]=temp;

    int i=low-1;
    int pivot=A[high];
    for(int j=low;j<=high-1;j++)
    {
        if(A[j]<=pivot)
        {
            i++;
            temp=A[j];
            A[j]=A[i];
            A[i]=temp;
        }
    }
    temp=A[i+1];
    A[i+1]=A[high];
    A[high]=temp;
    return (i+1);
}


void quickSort(int A[],int low,int high)
{
    int p;
    if(low<high)
    {
        p=Partition(A,low,high);
        quickSort(A,low,p-1);
        quickSort(A,p+1,high);
    }
}


int main()
{
    cout<<"Please input array limit: ";
    int n;
    cin>>n;
    int A[n];
    cout<<"Please input arrray elements: ";
    for(int i=0;i<n;i++)
        cin>>A[i];

        quickSort(A,0,n-1);

    cout<<"\nArray After sorting: ";
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}
