/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
find whether two elements exist such that their sum is equal to the given key element. (Time
Complexity = O(n log n))
*/
#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2], i;
    for (i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (i = 0; i < n2; i++)
        R[i] = A[m + 1 + i];

    int j, k;
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
            k++;
        }
        else
        {
            A[k] = R[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {

        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {

        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int l, int r)
{
    if (l < r)
    {

        int m = l + (r - l) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);
        merge(A, l, m, r);
    }
}

int main()
{
    int n, t = 1;
    while (t > 0)
    {
        cout << "Enter limit: ";
        cin >> n;
        int A[n];
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int k;
        cout << "Enter key: ";
        cin >> k;

        mergeSort(A, 0, n - 1);

        int i = 0, j = n - 1, flag = 0;
        while (i < j)
        {
            if (A[i] + A[j] == k)
            {
                flag = 1;
                break;
            }
            else if (k > A[i] + A[j])
                i++;
            else
                j--;
        }
        if (flag == 0)
            cout << "Element does not exist.";
        else
            cout << "The elements are " << A[i] << " and " << A[j];
        t--;
    }
}
