class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Size of input array
        int n = nums.size();
        
        //Edge case
        if(n == 0) return;

        //Required num of rotations
        int d = k % n;

        //Edge case
        if(d == 0) return;

        //Temp array to store elements to be shifted front
        vector<int> temp(d);

        //Storing temp values to rotate
        for(int i = 0; i < d; i++){
            temp[i] = nums[n-d+i];
        }

        //Shifting remaining elements
        for(int i = n - d - 1; i >= 0; i--){
            nums[i+d] = nums[i];
        }

        //Replaceing rotated values
        for(int i = 0; i < d; i++){
            nums[i] = temp[i];
        }
    }
};