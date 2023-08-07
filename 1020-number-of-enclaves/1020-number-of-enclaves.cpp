class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>visited(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==n-1 || i==m-1 || j==0)&&grid[i][j]==1 && !visited[i][j]){
                      q.push({i,j});
                      visited[i][j]=1;
                      grid[i][j]=0;
                }
            }
        }
        
        
        
        // cout<<q.size();
        int dir[5]={0,-1,0,1,0};
        while(!q.empty()){
          int x=q.front().first;
          int y=q.front().second;
          q.pop();
            
          for(int i=0;i<4;i++){
              int dx=x+dir[i],dy=y+dir[i+1];
              if(dx>=0 && dy>=0 && dx<m && dy<n && grid[dx][dy]==1 && !visited[dx][dy]){
                  q.push({dx,dy});
                  visited[dx][dy]=1;
                  grid[dx][dy]=0;
              }
          }  
            
        }
        
        int ans=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(grid[i][j]==1){
                  ans+=1;
               }
       
            }
        }
        
        return ans;
        
        
        
    
    }
};