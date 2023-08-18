class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
     int n=graph.size();
     vector<int>color(n,-1);
     vector<int>visited(n,0);
        
     queue<pair<int,int>>q;
        
      for(int node=0;node<n;node++){  
          if(!visited[node]){
          q.push({node,1});   
          visited[node]=1;
        
     while(!q.empty()){
         auto t=q.front();
         q.pop();
         int n=t.first,col=t.second;
         color[n]=col;
         for(auto i:graph[n]){
             if(!visited[i]){
                 visited[i]=1;
                 q.push({i,!col});
             }else if(color[i]!=-1 && color[i]!= !col){
                 return false;
             }
         }
         
         
     }   
          }
      }
        return true;
        
    }
};