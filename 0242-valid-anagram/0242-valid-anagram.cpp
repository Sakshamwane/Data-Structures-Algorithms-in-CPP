class Solution {
public:
    bool isAnagram(string s, string t) {
        //Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        //Return true if equal, false if not equal
        return s == t;
    }
};