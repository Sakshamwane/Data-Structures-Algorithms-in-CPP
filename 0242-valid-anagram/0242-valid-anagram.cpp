class Solution {
public:
    bool isAnagram(string s, string t) {
        //If sizes are not equal return 
        if(s.size() != t.size()) return false;

        //Array to keep count of each char
        vector<int> count(26, 0);

        //Count++ for each char in s
        for(char c : s) count[c - 'a']++;

        //Count-- for each char in t
        for(char c : t) count[c - 'a']--;

        //If any char count > 0 return false
        for(int i : count){
            if(i != 0) return false;
        }
        //Otherwise return true
        return true;
    }
};