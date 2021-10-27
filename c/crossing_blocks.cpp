// problem link:- https://www.codechef.com/LTIME99B/problems/CROSBLK

#include<bits/stdc++.h>
#define ll long long 
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;

void soln()
{
    int n;
    cin>>n;
    vector<int>a(n);
    loop(i,0,n)
    {
        cin>>a[i];
    }
    int start=a[0];
    loop(i,1,n)
    {
        if(a[i]>start){
            cout<<-1<<endl;
            return;
        }
    }
    stack<int>s;
    loop(i,1,n)
    {
        while(s.size() && s.top()<=a[i]){
            s.pop();
        }
        s.push(a[i]);
    }
    int k=0;
    while(!s.empty()){
        k++;
        s.pop();
    }
    cout<<k<<endl;
 }



int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     soln();
 }
 return 0;
}
