/*Q1) Given a list of activities with their starting time and finishing time. Your goal is to select maximum number of activities that can be performed by a single person such that selected activities must be non-conflicting. Any activity is said to be non-conflicting if starting time of an activity is greater than or equal to the finishing time of the other activity. Assume that a person can only work on a single activity at a time.

Input Format:
First line of input will take number of activities N.
Second line will take N space-separated values defining starting time for all the N activities.
Third line of input will take N space-separated values defining finishing time for all the N
activities.

Output Format:
Output will be the number of non-conflicting activities and the list of selected activities.
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,s[n],f[n];
    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=0;i<n;i++)
    cin>>f[i];
    vector<vector<int>> a;
    vector<int> act;
    for(i=0;i<n;i++)
    a.push_back({f[i],s[i],i+1});
    sort(a.begin(),a.end());
    int e=INT_MIN,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i][1]>=e)
        {
            e=a[i][0];
            c++;
            act.push_back(a[i][2]);
        }
    }
    cout<<"No. of non-conflicting activities : "<<c<<endl;
    cout<<"List of selected activities : ";
    for(i=0;i<act.size();i++)
    cout<<act[i]<<",";
    return 0;
}
