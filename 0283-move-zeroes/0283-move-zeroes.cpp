class Solution {
public:
    //Swap function
    void swap(vector<int> &nums, int a, int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
    void moveZeroes(vector<int>& nums) {
        //Size of given array
        int n = nums.size();
        
        //Left pointer to position
        int left = 0;

        //Swapping zero with non zero elements
        for(int right = 0; right < n; right++){
            if(nums[right] != 0){
                swap(nums, left, right);
                left++;
            }
        }
    }
};