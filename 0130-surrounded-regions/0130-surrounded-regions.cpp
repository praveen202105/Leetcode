class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>visited(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==n-1 || i==m-1 || j==0)&&board[i][j]=='O' && !visited[i][j]){
                      q.push({i,j});
                      visited[i][j]=1;
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
              if(dx>=0 && dy>=0 && dx<m && dy<n && board[dx][dy]=='O' && !visited[dx][dy]){
                  q.push({dx,dy});
                  visited[dx][dy]=1;
              }
          }  
            
        }
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(i!=0 && j!=n-1 && i!=m-1 && j!=0 && !visited[i][j]){
                  board[i][j]='X';
               }
       
            }
        }
        
        
        
    }
};