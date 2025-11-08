class Solution {
public:
    void swap(vector<int> &nums, int a, int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int left = 0; 
        int right = n-1;
        while(left<right){
            swap(nums, left, right);
            left++;
            right--;
        }
        left = 0;
        right = k-1;
        while(left<right){
            swap(nums, left, right);
            left++;
            right--;
        }
        left = k;
        right = n-1;
        while(left<right){
            swap(nums, left, right);
            left++;
            right--;
        }
    }
};