class Solution {
public:
    int func(vector<int> &nums){
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1; i<n; i++){
            int pick=nums[i];
            if(i>1) pick+=prev2;
            int notPick=0+prev;
            int curr=max(pick, notPick);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> temp1=nums;
        vector<int> temp2=nums;
        temp1[nums.size()-1]=0;
        temp2[0]=0;
        return max(func(temp1), func(temp2));
    }
};