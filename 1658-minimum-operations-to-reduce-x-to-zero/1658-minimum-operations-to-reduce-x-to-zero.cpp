class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        map<int,int>prefix,suffix;
        int s=0,c=1,ans=INT_MAX;
        
        for(auto i:nums){
            s+=i;
           if(prefix.find(s)==prefix.end()) prefix[s]=c;
            c++;
        }
        if(s<x) return -1;
        c=1,s=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            s+=nums[i];
            if(suffix.find(s)==suffix.end()) suffix[s]=c;
            c++;
        }
        
        for(auto i:prefix){
            if(suffix.find(x-i.first)!=suffix.end()){
                ans=min(i.second+suffix[x-i.first],ans);
            }
            
            if(i.first==x){
                ans=min(i.second,ans);
            }
        }
        
        
           for(auto i:suffix){
            if(prefix.find(x-i.first)!=prefix.end()){
                ans=min(i.second+prefix[x-i.first],ans);
            }
            
            if(i.first==x){
                ans=min(i.second,ans);
            }
        }
        
        return ans==INT_MAX ||  ans>nums.size() ?-1:ans;
        
    
    }
};

// 3 2 20 1 1 3
// 3 5 25 26 27 30
// 30 27 25 5 4 330 27 25 5 4 330 27 25 5 4 330 27 25 5 4 3    }
