class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Edge case
        if(strs.empty()) return "";
        
        //Sort given array
        sort(strs.begin(), strs.end());

        //Fetch first and last string in the array
        string first = strs[0];
        string last = strs[strs.size() - 1];

        //Get min length of two strings
        int minLen = min(first.size(), last.size());

        //Intialise empty string to store answer
        string ans = "";
        
        //Iterate & compare each character of both strings
        for(int i = 0; i < minLen; i++){

            //If it does not match, return ans
            if(first[i] != last[i]) return ans;

            //Append next character to answer
            ans += first[i];
        }
        return ans;
    }
};