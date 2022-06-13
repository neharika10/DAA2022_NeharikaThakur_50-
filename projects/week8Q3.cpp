/*
Assume that same road construction project is given to another person. The amount he will earn
from this project is directly proportional to the budget of the project. The person is greedy, so he
decided to maximize the budget by construction those roads who have highest construction cost.
Design an algorithm and implement it using a program to find the maximum budget required for
the project.
*/

#include <bits/stdc++.h>
#define NIL -1

using namespace std;

int findParent(vector<int> parent, int u)
{
    if (parent[u] < 0)
        return u;
    return findParent(parent, parent[u]);
}

bool UnionByWeight(vector<int> &parent, int u, int v)
{
    int pu = findParent(parent, u);
    int pv = findParent(parent, v);
    if (pu != pv)
    {
        if (parent[pu] <= parent[pv])
        {
            parent[pu] += parent[pv];
            parent[pv] = pu;
        }
        else
        {
            parent[pv] += parent[pu];
            parent[pu] = pv;
        }
        return true;
    }
    return false;
}

int kruskals(int **graph, int n)
{
    vector<pair<int, pair<int, int>>> G;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (graph[i][j] != 0)
                G.push_back(make_pair(graph[i][j], make_pair(i, j)));
    sort(G.begin(), G.end(), greater<pair<int, pair<int, int>>>());
    vector<int> parent(n, NIL);
    int s = 0;
    for (auto i : G)
    {
        int u = i.second.first;
        int v = i.second.second;
        int w = i.first;
        if (UnionByWeight(parent, u, v))
            s += w;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    int **graph;
    graph = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i)
        graph[i] = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> graph[i][j];
    cout << "Minimum spanning weight : " << kruskals(graph, n) << endl;
    return 0;
}
