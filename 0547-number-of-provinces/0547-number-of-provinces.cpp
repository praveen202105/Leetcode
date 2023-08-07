class Solution {
public:
    void dfs(int node,vector<int>&visited,vector<vector<int>>& isConnected){
        visited[node]=1;
        
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i] && isConnected[node][i]){
                dfs(i,visited,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int ans=0;
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans+=1;
                dfs(i,visited,isConnected);
            }
        }
        
        
        return ans;
    
    }
};
  