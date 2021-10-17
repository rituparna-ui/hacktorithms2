// question link-> https://www.codechef.com/problems/BUS

 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q, count = 0;
        cin >> n >> m >> q;
        cin.ignore();
        string inputs[q];
        for (int i = 0; i < q; i++)
        {
            getline(cin, inputs[i]);
        }
        int i;
        unordered_map<string, double> umap;
        for (i = 0; i < q; i++)
        {

            if (inputs[i][0] == '+')
            {
                if (count == m)
                {
                    cout << "Inconsistent" << endl;
                    break;
                }
                umap.insert(make_pair(inputs[i].substr(2, inputs[i].length() - 1), 2.718));
                count++;
            }
            else if (inputs[i][0] == '-')
            {
                string key = inputs[i].substr(2, inputs[i].length() - 1);
                if (umap.find(key) == umap.end())
                {
                    cout << "Inconsistent" << endl;
                    break;
                }
                count--;
            }
        }
        if (i == q)
        {
            cout << "Consistent" << endl;
        }
    }
    return 0;
}