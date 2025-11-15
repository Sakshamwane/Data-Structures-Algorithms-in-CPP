class Solution {
public:
    bool isPalindrome(string s) {
        string cleanedString = "";
        for(char c : s){
            if(isalnum(c)){
                cleanedString += tolower(c);
            }
        }

        string reverseString = cleanedString;
        reverse(reverseString.begin(), reverseString.end());
        return cleanedString == reverseString;
    }
};