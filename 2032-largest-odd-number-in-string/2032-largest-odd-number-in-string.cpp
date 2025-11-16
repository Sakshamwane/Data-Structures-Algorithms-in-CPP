class Solution {
public:
    string largestOddNumber(string num) {
        //Size of string
        int n = num.size();

        //Iterate from last digit
        for(int i = n-1; i >= 0; i--){
            //Extract last digit
            int digit = num[i] - '0';
            
            //If its odd
            if(digit % 2 != 0){
                //Return the string from 0 to i+1
                return num.substr(0, i+1);
            }
        }
        //Else return empty string
        return "";
    }
};