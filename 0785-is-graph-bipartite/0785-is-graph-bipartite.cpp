class Solution
{
    bool dfs(vector<vector<int>>&graph,int node,vector<int>&color,int col){
   
          color[node]=col;
     for(auto i:graph[node]){
         if(color[i]==-1){
            if(dfs(graph,i,color,!col)==false) return false;
         }else if(color[i]==col) return 0;
     }
        
        return 1;
        
    }
    public:
        bool isBipartite(vector<vector < int>> &graph)
        {
            int n = graph.size();
            vector<int> color(n, -1);
            
       for (int node = 0; node < n; node++)
            {
                if (color[node]==-1)
                {
                   if(!dfs(graph,node,color,0)) return false;
                }
            }
            return true;
        }
};