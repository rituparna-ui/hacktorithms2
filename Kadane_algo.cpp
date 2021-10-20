#include<bits/stdc++.h>
using namespace std;
// kadane's algorithm tells you about the longest contiguous subarray with maximum sum.
long long kadane(vector<long long int> arr){
    long long ans = -1e18;
    long long max = 0;
    for(auto i:arr){
        max = max+i;
        if(max>ans){
            ans = max;
        }if(max<0){
            max = 0;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for(auto &i:v){
        cin >> i;
    }
    cout << kadane(v) << endl;
}
