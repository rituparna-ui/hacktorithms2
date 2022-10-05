#include<bits/stdc++.h>
using namespace std;

bool Iscycle(vector<int> adj[],int n,int vis[],int i,int p){
    vis[i] = 1;
    for(auto x : adj[i]){
        if(vis[x] == 0){
            if(Iscycle(adj,n,vis,x,i)) return true;
        }else if(x != p) return true;
    }
    return false;
}

int main(){
    
    int n,e;
    cin>>n>>e;
    
    vector<int> adj[n];
    
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    //vector<bool> vis(n,false);
    int vis[n];
    fill(vis,vis+n,0);
    
    bool cycle = false;
    
    for(int i=0;i<n;i++){
        if(vis[i] == 0){
            if(Iscycle(adj,n,vis,i,-1)){
                cycle = true;
                break;
            }
        }
    }
    
    if(cycle){
        cout<<"Cycle exists";
    }else{
    cout<<"Cycle does not exists";
    }
    return 0;
}



