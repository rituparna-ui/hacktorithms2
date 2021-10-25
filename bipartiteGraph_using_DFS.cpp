
#include <bits/stdc++.h>

using namespace std;

bool dfs(int i,vector<int> adj[],vector<int> col){
    
    if(col[i] == -1){
    col[i] = 1;
    }
    
    for(int node : adj[i]){
        if(col[node] == -1){
            col[node] = 1-col[i];
            if(!dfs(node,adj,col)){
                return false;
            }else if (col[i] == col[node]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n,e;
    cin>>n>>e;
    
    vector<int> adj[n];
    
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    
    vector<int> col(n,-1);
    
    bool bipartite = false;
    
    for(int i=0;i<n;i++){
        if(col[i] == -1){
            if(!dfs(i,adj,col))
            {
                bipartite = false;
            break;
        }
        }
    }
    
    if(bipartite){
        cout<<"bipartite";
    }else{
        cout<<"not bipartite";
    }
}
