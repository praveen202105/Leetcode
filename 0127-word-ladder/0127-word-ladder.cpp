class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      map<string,int>mp,visited;
        
        for(auto i:wordList) mp[i]=0;
        if(mp.find(endWord)==mp.end()) return 0;
         // set<string>visited;
         queue<string>q;
         q.push(beginWord);
        
        int level=1;
        mp[beginWord]=1;
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
                          if(mp.find(temp)!=mp.end() && mp[temp]==0){
                              q.push(temp);
                              mp[temp]=1;
                              // cout<<q.front();0
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