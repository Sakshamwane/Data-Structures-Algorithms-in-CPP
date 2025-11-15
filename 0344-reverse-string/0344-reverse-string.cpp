class Solution {
public:
    void reverseString(vector<char>& s) {
        //Intialise two pointers
        int left = 0, right = s.size()-1;

        //While two pointers collide
        while(left < right){

            //Swap characters
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            //Re-initalise pointers
            left++, right--;
        }
    }
};