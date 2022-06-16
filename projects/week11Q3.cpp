/*Q3) Given a set of elements, you have to partition the set into two subsets such that the sum of elements in both subsets is same. Design an algorithm and implement it using a program to solve this problem.

Input Format:
First line of input will take number of elements n present in the set.
Second line of input will take n space-separated elements of the set.

Output Format:
Output will be 'yes' if two such subsets found otherwise print 'no'.
*/

#include<bits/stdc++.h>
using namespace std;
int main()  {
    int n;
    cin>>n;
    int i,j,a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int sum=0;
    for(i=0;i<n;i++)
    sum+=a[i];
    if(sum%2!=0)
    {
        cout<<"no";
        return 0;
    }
    sum=sum/2;
    bool s[n+1][sum+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
        {
            if(j==0)
            s[i][j]=1;
            else if(i==0)
            s[i][j]=0;
            else
            {
                if(a[i-1]>j)
                s[i][j]=s[i-1][j];
                else
                s[i][j]=(s[i-1][j] || s[i-1][j-a[i-1]]);
            }
        }
    }
    if(s[n][sum])
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
