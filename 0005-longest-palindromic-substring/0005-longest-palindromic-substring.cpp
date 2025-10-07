class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int len = 0;
        for(int i=0; i<s.length(); i++){
            for(int j=i; j<s.length(); j++){
                int left = i;
                int right = j;
                while(left<=right){
                    if(s[left]!=s[right]){
                        break;
                    }
                    left++;
                    right--;
                }

                if(left>=right && (j-i+1) > len){
                    ans = s.substr(i, j-i+1);
                    len = j-i+1;
                }

            }
        }
        return ans;
    }
};