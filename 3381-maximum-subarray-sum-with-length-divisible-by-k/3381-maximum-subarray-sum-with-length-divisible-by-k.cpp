class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        //Size of array
        long long n = nums.size();

        // Initailize large value to handle negative numbers
        long long INF = 1e18;

        //Store the min prefix sum for each remainder (0 to k-1)
        vector<long long> min_prefix(k, INF);

        //Base case: Prefix sum of empty array is 0
        min_prefix[0] = 0;

        long long current_prefix_sum = 0;
        long long max_sum = -INF;

        for(int i = 0; i < n; i++){
            current_prefix_sum += nums[i];

            int remainder = (i + 1) % k;

            if(min_prefix[remainder] != INF){
                long long current_subarray_sum = current_prefix_sum - min_prefix[remainder];
                max_sum = max(max_sum, current_subarray_sum);
            }
            min_prefix[remainder] = min(min_prefix[remainder], current_prefix_sum);
        }
        return max_sum;
    }
};