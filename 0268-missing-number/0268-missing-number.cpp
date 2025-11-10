class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Size of given array
        int n = nums.size();

        //Hash array to store the frequencey of each array
        vector<int> freq(n+1, 0);

        //Iterating over input array to update the frequencies
        for(int num : nums){
            freq[num]++;
        }

        //Iterating over freq array 
        for(int i = 0; i < freq.size(); i++){
            //Checking if the element has freq 0
            if(freq[i] == 0) return i;
        }

        return -1;
    }
};