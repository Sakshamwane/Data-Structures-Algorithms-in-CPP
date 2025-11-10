class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Size of given array
        int n = nums.size();

        //Sum of n elements
        int sum1 = (n*(n+1))/2;

        //Sum of array elements
        int sum2 = 0;
        for(int num : nums){
            sum2 += num;
        }

        //Finding the missing number
        int ans = sum1 - sum2;

        return ans;
    }
};