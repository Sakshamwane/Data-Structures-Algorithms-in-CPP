class Solution {
private:
    bool possible(vector<int> nums, int k, int m, int day){
        int n=nums.size();
        int cnt=0;
        int numOfBouq=0;

        for(int i=0; i<n; i++){
            if(nums[i]<=day){
                cnt++;
            } else{
                numOfBouq+=(cnt/k);
                cnt=0;
            }
        }
        numOfBouq+=(cnt/k);

        if(numOfBouq>=m){
            return true;
        } else{
            return false;
        }
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=1ll*k*m;
        int n=bloomDay.size();
        if(val>n) return -1;

        int ans=-1;
        
        int low=*min_element(bloomDay.begin(), bloomDay.end());
        int high=*max_element(bloomDay.begin(), bloomDay.end());

        while(low<=high){
            int mid=low+(high-low)/2;

            if(possible(bloomDay, k, m, mid)){
                ans=mid;
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return ans;
    }
};