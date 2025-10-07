class Solution {
public:
    string longestPalindrome(string s) {
        int ans = 0;
        int ansLen = 0;
        for(int i=0; i<s.size(); i++){
            //Odd
            int left = i;
            int right = i;
            while(left>=0 && right<=s.size() && s[left] == s[right]){
                if(right-left+1 > ansLen){
                    ans = left;
                    ansLen = right-left+1;
                }
                left--;
                right++;
            }

            left = i;
            right = i+1;
             while(left>=0 && right<=s.size() && s[left] == s[right]){
                if(right-left+1 > ansLen){
                    ans = left;
                    ansLen = right-left+1;
                }
                left--;
                right++;
            }
        }
        return s.substr(ans, ansLen);
    }
};