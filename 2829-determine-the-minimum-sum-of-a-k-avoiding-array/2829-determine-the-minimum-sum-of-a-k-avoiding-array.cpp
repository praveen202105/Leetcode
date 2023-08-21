class Solution {
public:
    int minimumSum(int n, int k) {
        int c=0;
        int s=0,i=1;
        unordered_set<int>st;
        while(c<n){
            if(st.find(k-i)==st.end()){
                s+=i;
                st.insert(i);
                c++;
            }
            i++;
            // cout<<s<<" ";
        };
        
        return s;
    }
};