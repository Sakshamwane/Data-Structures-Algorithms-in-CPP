class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0, n = nums.size();
        for(int right = 0; right < n; right++){
            if(nums[right] != val){
                swap(nums[left], nums[right]);
                left++;
            }
        }
        return left;
    }
};