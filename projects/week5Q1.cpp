/**Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and
implement it using a program to find which alphabet has maximum number of occurrences and print it.*/

#include <iostream>
using namespace std;
int main()
{
    int t = 1;
    while (t > 0)
    {
        cout << "Enter limit: ";
        int n;
        cin >> n;
        char A[n];
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int Count[26] = {0};
        for (int i = 0; i < n; i++)
            Count[(int)A[i] - 97]++;

        int Max = 0;
        for (int i = 1; i < 26; i++)
            if (Count[i] > Count[Max])
                Max = i;
        if (Count[Max] > 1)
            cout << (char)(Max + 97) << " repeats " << Count[Max] << " times ";
        else
            cout << "No Duplicates Present.";

        t--;
    }
}
