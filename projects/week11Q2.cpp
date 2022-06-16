/*Q2) Given a set of available types of coins. Let suppose you have infinite supply of each type of coin.
For a given value N, you have to Design an algorithm and implement it using a program to find number of ways in which these coins can be added to make sum value equals to N.

Input Format:
First line of input will take number of coins that are available.
Second line of input will take the value of each coin.
Third line of input will take the value N for which you need to find sum.

Output Format:
Output will be the number of ways.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,amt;
    cin>>n;
    int i,j,a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>amt;
    int ans[amt+1];
    for(i=1;i<=amt;i++)
    ans[i]=0;
    ans[0]=1;
    for(j=0;j<n;j++)
    {    
        for(i=1;i<=amt;i++)
        {
            if(a[j]<=i)
            ans[i]+=(ans[i-a[j]]);
        }
    }
    cout<<ans[amt];
    return 0;
}
