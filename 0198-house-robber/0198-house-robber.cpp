class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int prev2=nums[0];
        int prev=max(nums[0], nums[1]);
        for(int i=2; i<nums.size(); i++){
            int curr=max(prev, prev2+nums[i]);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};