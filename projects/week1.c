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
