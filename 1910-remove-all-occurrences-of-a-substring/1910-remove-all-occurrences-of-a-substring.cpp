class Solution {
public:
    string removeOccurrences(string s, string part) {
       // int found=;
        while(s.find(part)<s.size()){
            s.erase(s.find(part),part.size());
        }
        
        return s;
        
    }
};