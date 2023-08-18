class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
     int n=graph.size();
     vector<int>color(n,-1);
     vector<int>visited(n,0);
        
     queue<int>q;
        
      for(int node=0;node<n;node++){  
          if(!visited[node]){
          q.push(node);   
          visited[node]=1;
        
     while(!q.empty()){
         int n =q.front();
         q.pop();
         
         
         for(auto i:graph[n]){
             if(!visited[i]){
                 visited[i]=1;
                 color[i]=!color[n];
                 q.push(i);
             }else if( color[i]==color[n]){
                 return false;
             }
         }
         
         
     }   
          }
      }
        return true;
        
    }
};