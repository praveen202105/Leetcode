class Solution {

public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        vector<vector<int>>visited(m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>>q;
        
        
                int dir[5]={0,-1,0,1,0};
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                     ans[i][j]=0;
                     visited[i][j]=1;
                }
            }
        }
        
        while(!q.empty()){
           auto f=q.front();
            q.pop();
            int x=f.first.first;
            int y=f.first.second;
            int dis=f.second;
           
            ans[x][y]=dis;
            
                for(int d=0;d<4;d++){
                    int dx=x+dir[d],dy=y+dir[d+1];
                    if(dx>=0 && dy>=0 && dx<mat.size() && dy<mat[0].size() && !visited[dx][dy]){
                         visited[dx][dy]=1;
                         q.push({{dx,dy},dis+1});
                    }
                }
            }
            
            
            
            
        
        
        return ans;
    }
};