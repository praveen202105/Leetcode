class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size(),n=image[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int val=image[sr][sc];
        int dir[5]={0,-1,0,1,0};
        while(q.size()){
         auto node=q.front();
         q.pop();
         int x=node.first,y=node.second;
          image[x][y]=color;
          visited[x][y]=1;
         for(int i=0;i<4;i++){
             int nx=dir[i]+x,ny=dir[i+1]+y;
             
             if(nx>=0 && ny>=0 && nx<m && ny<n && image[nx][ny]==val && visited[nx][ny]==0){
                 q.push({nx,ny});
             }
         }   
            
        }
        
        return image;
    }
};