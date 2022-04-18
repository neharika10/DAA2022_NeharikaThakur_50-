/*
Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that
their difference is equal to a given key, K.

*/
#include <stdio.h>
int main()
{
  int ar[20], i, j, k, n, count = 0, flag = 0;
  printf("enter length of array\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }
  printf("enter key:");
  scanf("%d",&k);
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {

      {
        if (ar[i] - ar[j] == k || ar[j]-ar[i]==k)
        {
          flag++;
          count++;
        }
      }
    }
  }
  printf("%d pairs",count);
  if (flag == 0)
  {
    printf("no pair found\n");
  }
}
