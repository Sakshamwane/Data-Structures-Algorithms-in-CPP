class Solution {
public:

    void swap(vector<int> &nums, int a, int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        //Pointer
        int left = 0;

        for(int right = 0; right<n; right++){
            if(nums[right] != 0){
                swap(nums, left, right);
                left++;
            }
        }
    }
};