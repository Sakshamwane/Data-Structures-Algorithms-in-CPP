class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*Intialize max sum with the smallest possible int*/
        int maxi = INT_MIN;

        /*Size of array*/
        int n = nums.size();

        /*Track curr sum*/
        int sum = 0;

        /*Iterate over each start ind of subarrays*/
        for(int i = 0; i < n; i++){
            sum += nums[i];
            maxi = max(maxi, sum);
            if(sum <= 0) sum =0;
        }
        return maxi;
    }
};