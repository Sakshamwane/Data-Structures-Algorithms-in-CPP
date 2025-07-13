class Solution {
public:
    int mySqrt(int x) {
        long long low=1;
        long long high=x-1;
        long long ans=0;

        if (x == 0 || x == 1) return x;

        while(low<=high){
            long long mid=(low+high)/2;
            long long val=mid*mid;

            if(val==x){
                return mid;
            }else if(val<=x){
                ans=mid;
                low=mid+1;
            } else{
                high=mid-1;
            }
        }
        return ans;
    }
};