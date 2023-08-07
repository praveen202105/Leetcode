class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        queue<pair<int,int>>q;
        int ans=0;
        int dir[5]={0,-1,0,1,0};
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && visited[i][j]==0){
                    ans+=1;
                      visited[i][j]=1;
                    q.push({i,j});
                    while(q.size()){
                        auto land=q.front();
                        q.pop();
                        int x=land.first,y=land.second;
                      
                        for(int k=0;k<4;k++){
                            int nx=x+dir[k],ny=y+dir[k+1];
                            if(nx>=0 && ny>=0 && nx<m && ny<n && grid[x][y]==grid[nx][ny] && visited[nx][ny]==0){
                                  visited[nx][ny]=1;
                                q.push({nx,ny});
                            }
                        }
                    }
                    
                }
            }
        }
        
        return ans;
        
    }
};