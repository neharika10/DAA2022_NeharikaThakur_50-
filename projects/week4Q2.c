/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
sort an array of elements by partitioning the array into two subarrays based on a pivot element
such that one of the sub array holds values smaller than the pivot element while another sub
array holds values greater than the pivot element. Pivot element should be selected randomly
from the array. Your program should also find number of comparisons and swaps required for
sorting the array.
*/
#include<stdio.h>
int s=0;
void quicksort(int arr[] , int low , int high , int *c);
int partition(int arr[] , int low , int hight, int *c);
void swap(int *a,int *b);
int main(){
    int i,t=1,n;
    while(t)
    {
        s=0;
        int c=0;
        printf("Enter limit :");
        scanf("%d",&n);
        int arr[n];
        printf("Enter elements :");

        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int low=0,high=n-1;
        quicksort(arr,low,high,&c);
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
            printf("\nComparision : %d",c);
            printf("\nSwaps : %d",s);

    t--;
    }
}
void swap(int *a,int *b){
    s++;
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quicksort(int arr[] , int low , int high , int *c){
    if(low<high){
        int p=partition(arr,low,high,c);
        quicksort(arr,low,p-1,c);
        quicksort(arr,p+1,high,c);
    }
}
int partition(int arr[] , int low , int high, int *c){
    int i=low-1;
    int j;
    int pivot=arr[high];
    for(j=i+1;j<high;j++){
        (*c)++;
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
        swap(&arr[i+1],&arr[high]);
    return i+1;
}
