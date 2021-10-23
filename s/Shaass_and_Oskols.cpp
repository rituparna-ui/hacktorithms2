//Ques link --> https://codeforces.com/contest/294/problem/A

#include <bits/stdc++.h>
using namespace std;

void new_arrangement(int n, int arr[], int x, int y)
{
    int line_no = x;
    int bird_shorted = y;
    if (line_no == 1)
    {
        arr[line_no + 1] += arr[line_no] - bird_shorted;
        arr[line_no] = 0;
        return;
    }
    else if (line_no == n)
    {
        arr[line_no - 1] += bird_shorted - 1;
        arr[line_no] = 0;
        return;
    }
    else
    {
        arr[line_no - 1] += bird_shorted - 1;
        arr[line_no + 1] += arr[line_no] - bird_shorted;
        arr[line_no] = 0;
    }
    return;
}

int main()
{
    int n = 0, m = 0, x = 0, y = 0;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        new_arrangement(n, arr, x, y);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }
}
