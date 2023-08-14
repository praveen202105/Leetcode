class Solution {
public:
    vector<pair<int,string>>Mymap={
        {1000000000,"Billion"},{1000000,"Million"},{1000,"Thousand"},{100,"Hundred"},{90,"Ninety"},
        {80,"Eighty"},{70,"Seventy"},{60,"Sixty"},{50,"Fifty"},{40,"Forty"},{30,"Thirty"},           
        {20,"Twenty"},{19,"Nineteen"},{18,"Eighteen"},{17,"Seventeen"},{16,"Sixteen"}
        ,{15,"Fifteen"},{14,"Fourteen"},{13,"Thirteen"},{12,"Twelve"},{11,"Eleven"},{10,"Ten"},
        {9,"Nine"},{8,"Eight"},{7,"Seven"},{6,"Six"},{5,"Five"},{4,"Four"},
        {3,"Three"},{2,"Two"},{1,"One"},{0,"Zero"}
    };
    string numberToWords(int num) {
     if(num==0) return "Zero";
        for(auto i:Mymap){
            if(num>=i.first){
               string s1="";
                if(num>=100){
                    s1=numberToWords(num/i.first)+" ";
                }
               string s2=i.second;
               string s3="";
                if(num%i.first!=0){
               s3=" "+numberToWords(num%i.first);
                }
                 return s1+s2+s3;
            }
           
        }
        
        return "";
    }
};