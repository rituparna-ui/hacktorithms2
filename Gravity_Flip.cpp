//Ques Link --> https://codeforces.com/contest/405/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, i = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = 0, l = 0, temp = 0, v = 0;
    for (j = 0; j < n; j++)
    {
        int first = a[j];
        for (l = 1; l < n; l++)
        {
            if (a[l] < first)
            {
                first = a[l];
                v = l;
            }
        }
        if (v != 0)
        {
            temp = a[j];
            a[j] = first;
            a[v] = temp;
            v = 0;
        }
    }
    for (int r = 0; r < n; r++)
    {
        cout << a[r] << " ";
    }
    return 0;
}