class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
     int n=grid.size(),m=grid[0].size();
     int total=0;
     queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(grid[i][j]!=0) total++;
              if(grid[i][j]==2) q.push({i,j});
          }   
        }

//         0,-1
//         0,1;
//         -1,0
//          1,0
            // cout<<total<<" ";
            
        int dirx[4]={0,-1,0,1};
        int diry[4]={-1,0,1,0};
        vector<vector<int>>visited(n,vector<int>(m,0));
        int ans=0;
        while(q.size()){
                        // bool present=0;
                        int sz=q.size();
                        total-=sz;
                        for(int k=0;k<sz;k++){
                        auto rotten=q.front();
                        int x=rotten.first,y=rotten.second;
                    
                        q.pop();
                        visited[x][y]=1;
                    
                        
                        for(int d=0;d<4;d++){
                            int dx=x+dirx[d],dy=y+diry[d];
                            if(dx>=0 && dy>=0 && dx<n && dy<m && grid[dx][dy]==1 && !visited[dx][dy]){
                                grid[dx][dy]=2;
                                q.push({dx,dy});
                            }
                        }
                        

                    
                }
                                    if(!q.empty())ans+=1;
        }
        
        
        return total==0?ans:-1;
     
    }
};

// [[2,1,1],
//  [1,1,1]
//  [0,1,2]]
//  221
//  211
//  012
 
//      222
//      221
//      012
     
//      222
//      222
//      012
     