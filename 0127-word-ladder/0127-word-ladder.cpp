class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      map<string,int>mp,visited;
        
        for(auto i:wordList) mp[i]++;
        // if(mp.find(endWord)==mp.end()) return 0;
         // set<string>visited;
         queue<string>q;
         q.push(beginWord);
         visited[beginWord]++;
        int level=1;
        
          while(!q.empty()){
              int s=q.size();
              for(int sz=0;sz<s;sz++){
                  string word=q.front();
                  if(word==endWord) return level;
                  q.pop();

                  for(int i=0;i<word.size();i++){
                      string temp=word;
                      for(char al='a';al<='z';al++){
                          temp[i]=al;
                          // cout<<temp<<" ";
                          if(mp[temp] && visited.find(temp)==visited.end()){
                              q.push(temp);
                              visited[temp]++;
                              // cout<<q.front();
                          }
                      }
                      // cout<<endl;
                  }
              
              }
              
              if(q.size()) level++;
          }
        
        return 0;
    }
};