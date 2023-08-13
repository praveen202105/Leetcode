//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int findans(string s,char p,int i){
        if(i<0)return -1;
        if(s[i]==p){
            return i;
        }
        
        return findans(s,p,i-1);
    }
    
    int LastIndex(string s, char p){
        //complete the function here
        int ans=findans(s,p,s.size()-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends