/*
3 March 2022
Given an array of non-negative integers, design a linear alogrithm and implement it using a program to find whether 
the given key element is present in the array or not.
Also find total number of comparisons.
*/



#include <stdio.h>
int main()
{
    int key;
    int ar[7] = {5, 6, 8, 2, 1, 9, 25};

    printf("\nenter the key you wish to search: ");
    scanf("%d", &key);
    for (int i = 0; i < 7; i++)
    {

        if (ar[i] == key)
        {
            printf("found at index %d\n", i);
            printf("number of comparisons %d\n", i + 1);
            break;
        }
        else if (i == 6)
            printf("element not found");
    }

    
    
}
