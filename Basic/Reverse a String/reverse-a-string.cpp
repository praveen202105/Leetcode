//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    void rev(string &str,int i,int j){
        if(i>=j){
            return;
        }
        swap(str[i],str[j]);
        rev(str,i+1,j-1);
    }
    string reverseWord(string str)
    {
        // Your code goes here
        rev(str,0,str.size()-1);
        return str;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends