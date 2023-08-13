//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
//   bool ispalindrome(string &str,long long i,long long j){
//       if(i>j) return 1;
//       if(str[i]!=str[j]) return 0;
//       int f=i+1,l=j-1;
//       return ispalindrome(str,f,l);
//   }
    int isReversible(string str, int n) { 
         //complete the function here
        //  bool f=ispalindrome(str,0,n-1);
        int i=0,j=n-1;
        
        while(i<=j){
            if(str[i]!=str[j]) return 0;
            i++;
            j--;
        }
         return 1;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isReversible(s, n) << endl;
    }
return 0;
}


// } Driver Code Ends