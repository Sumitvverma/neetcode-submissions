class Solution {
public:
    void dfs(int i,vector<vector<int>>&adj,vector<int>&vis){
        if(vis[i]) return;
        vis[i]=1;
        for(int j : adj[i]) {
            if(!vis[j])
                dfs(j, adj, vis);
        }
    }


    int countComponents(int n, vector<vector<int>>& edges) {
        int count=0;
        vector<vector<int>>adj(n);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){dfs(i,adj,vis);
            count++;}
        }
        return count;
    }
};
