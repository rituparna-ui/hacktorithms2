// problem link- https://www.codechef.com/COOK130B/problems/BNSONSTR

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    ll m;
    cin>>m;
    string s;
    cin>>s;
    ll total_0=0,total_1=0;
    for(ll i=0;i<m;i++){
        if(s[i]=='1'){
            total_1++;
        }
        else{
            total_0++;
        }
    }
    vector<ll> factors;
    for(ll i=1;i<=sqrt(m);i++){
        if(m%i==0){
            if(m/i==i){
                factors.push_back(i);
            }
            else{
                factors.push_back(m/i);
                factors.push_back(i);
            }
        }
    }
    ll ans = 1e9;
    for(auto fact:factors){
        vector<ll> freq(fact);
        for(ll i=0;i<fact;i++){
            for(ll j=i;j<m;j+=fact){
                if(s[j]=='1'){
                    freq[i]++;
                }
            }
        }
        ll req=m/fact;
        for(ll i=0;i<fact;i++){
            ll to_convert=req-freq[i];
            to_convert+=(total_1-freq[i]);
            ans=min(ans,to_convert);
        }

    }
    cout<<ans<<endl;
}

int main(){
    FAST1;
    FAST2;
    ll test;
    cin>>test;
    while(test--){
        solve();
    }
}

