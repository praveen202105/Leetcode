class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mp;
        
        for(auto i:bills){
            int no=i;
            if(no==5){
                mp[no]++;
            }else if(no == 10){
                if(mp.find(5)==mp.end()){
                    return 0;
                }else{
                    mp[no]++;
                    mp[5]--;
                    if(mp[5]==0)mp.erase(5);
                }
            }else{
                if(mp.find(5)!=mp.end() && mp.find(10)!=mp.end() ){
                    
                    mp[5]--;
                    mp[10]--;
                if(mp[5]==0)mp.erase(5);
                if(mp[10]==0)mp.erase(10);
                    
                }else if(mp.find(5)!=mp.end() && mp[5]>=3){
                    mp[5]-=3;
                   if(mp[5]==0)mp.erase(5);
                }
                else{
                    return 0;
                }
            }
            
        }
        
        return 1;
    }
};