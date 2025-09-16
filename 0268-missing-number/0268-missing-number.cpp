class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum=0;
        for(int i=0; i<=nums.size(); i++){
            totalSum+=i;
        }
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        return totalSum-sum;
    }
};