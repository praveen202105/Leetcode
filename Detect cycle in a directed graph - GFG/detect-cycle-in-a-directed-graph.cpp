//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  bool dfs(int i,vector<int>adj[],vector<int>&visited,vector<int>&cycleVisited){
        visited[i]=1;
        cycleVisited[i]=1;
        
        for(auto node:adj[i]){
            if(!visited[node]){
                if(dfs(node,adj,visited,cycleVisited)) return 1;
            }else if(cycleVisited[node]){
                return 1;
            }
        }
        cycleVisited[i]=0;
        return 0;
    }
  public:
    // Function to detect cycle in a directed graph.
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>visited(V+1,0),cycleVisited(V+1,0);
        for(int i=0;i<V;i++){
            if(!visited[i]){
               if(dfs(i,adj,visited,cycleVisited)) return 1;
          }
        }
        
        return 0;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends