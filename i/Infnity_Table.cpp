//Ques Link --> https://codeforces.com/contest/1560/problem/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int k = 0;
        cin >> k;
        int r = 0, c = 0;
        int flor = floor(sqrt(k));//2
        int cil = ceil(sqrt(k));//3
        int a = k - (flor*flor);//0
        if(flor*flor == k)
        {
            r = flor;
            c = 1;
        }
        else if(a > cil)
        {
            r = cil;
            c = (cil*cil) - k + 1;
        }
        else if(a <= cil)
        {
            r = a;
            c = flor + 1;
        }
        cout << r << " " << c << endl;
    }
}
