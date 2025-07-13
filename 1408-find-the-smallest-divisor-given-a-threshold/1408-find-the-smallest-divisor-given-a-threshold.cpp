class Solution {
public:
    int func(vector<int> &nums, int d){
        int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            sum+=ceil((double)nums[i]/(double)d);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(func(nums, mid)<=threshold){
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return low;
    }
};