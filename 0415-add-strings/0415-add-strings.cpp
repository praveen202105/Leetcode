class Solution {
public:
    void add(string &no1,int n1,string &no2,int n2,int c,string &ans){
        if(n1<0 && n2<0){
            if(c!=0){
                ans.push_back('0'+c);
               
            }
             return;
        }
        int n=(n1>=0?no1[n1]:'0')-'0';
        int m=(n2>=0?no2[n2]:'0')-'0';
        
        int s=n+m+c;
        int d=s%10;
        ans.push_back('0'+d);
          add(no1,n1-1,no2,n2-1,s/10,ans);
           
    }
    string addStrings(string num1, string num2) {
        string ans;
     add(num1,num1.size()-1,num2,num2.size()-1,0,ans);
        reverse(ans.begin(),ans.end());
     return ans;
    }
};