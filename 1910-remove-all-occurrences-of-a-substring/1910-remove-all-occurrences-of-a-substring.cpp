class Solution {
public:
    string removeOccurrences(string s, string part) {
        int f=s.find(part);
        if(f<s.size())  s.erase(s.find(part),part.size());
        else return s;
       
        return removeOccurrences(s,part);
        
    }
};