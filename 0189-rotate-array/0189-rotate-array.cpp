class Solution {
public:
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        if(n == 0) return;
        int d = k%n;
        if(d == 0) return;
        vector<int> temp(d);
        for(int i = 0; i < d; i++){
            temp[i] = nums[n - d + i];;
        }
        for(int i = n - d - 1; i >= 0; i--){
            nums[i+d] = nums[i];

        }
        for(int i = 0; i < d; i++){
            nums[i] = temp[i];
        }
    }
};