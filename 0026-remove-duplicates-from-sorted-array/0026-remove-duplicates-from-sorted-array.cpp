class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Pointer to track unique elements
        int left = 0;

        //Size of given array
        int n = nums.size();

        //Loop to traverse all elements
        for(int right = 1; right < n; right++){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
        }
        return left + 1;
    }
};