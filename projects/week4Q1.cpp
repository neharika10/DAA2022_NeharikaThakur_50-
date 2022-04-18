/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
sort an array of elements by dividing the array into two subarrays and combining these subarrays
after sorting each one of them. Your program should also find number of comparisons and
inversions during sorting the array.
*/

#include<iostream>
using namespace std;
void display(int [], int);
void mergeSort(int [], int, int);
void merge(int [], int , int , int );
void inverseCompare(int [], int);

int main(){
    int t=1;
    while(t){

        int n;
        cout<<"\nEnter limit: ";
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        cout<<"\nArray before sorting: ";
        display(arr,n);

        mergeSort(arr,0,n-1);
        inverseCompare(arr,n);

        cout<<"\nArray after sorting: ";
        display(arr,n);

        t--;
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void mergeSort(int arr[], int l,int r){
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void merge(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1], R[n2];

    for(int i=0; i<n1; i++){
        L[i] = arr[l+i];
    }

    for(int i=0; i<n2; i++){
        R[i] = arr[m+i+1];
    }

    int i=0, j=0, k=l;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
            k++;
        }else{
            arr[k]=R[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k]=L[i];
        i++,k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++,k++;
    }
}

void inverseCompare(int arr[], int n){

    int inversion=0,comparision=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            comparision++;
            if(arr[i]>arr[j]){
                inversion++;
        }
    }
    }

    cout<<"\nNo if inversions: "<<inversion<<"\nNo of comparisions: "<<comparision<<endl;
}
