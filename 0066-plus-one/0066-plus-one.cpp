class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //Traverse from right to left
        for(int i = digits.size() -1; i >=0; i--){
            /*If digit is less than 9, add 1, 
            no further change required*/
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            //If digit is greater then 9, convert to 0
            digits[i] = 0;
        }
        //And add 1 to the front, and return
        digits.insert(digits.begin(), 1);
        return digits;
    }
};