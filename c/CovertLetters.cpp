// Ques link --> https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int upper = 0, lower = 0;
    int upp[input.size()], low[input.size()];
    int up = 0, lo = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            lower++;
            low[lo] = i;
            lo++;
        }
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            upper++;
            upp[up] = i;
            up++;
        }
    }
    if (lower > upper)
    {
        for (int i = 0; i < up; i++)
        {
            input[upp[i]] = (char)((int)input[upp[i]] + 32);
        }
    }
    else if (lower < upper)
    {
        for (int i = 0; i < lo; i++)
        {
            input[low[i]] = (char)((int)input[low[i]] - 32);
        }
    }
    else if (lower = upper)
    {
        for (int i = 0; i < up; i++)
        {
            input[upp[i]] = (char)((int)input[upp[i]] + 32);
        }
    }
    cout << input;
}
