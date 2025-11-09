class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Set to store unique elements
        set<int> s;

        //Storing array elements in set
        for(int val : nums){
            s.insert(val);
        }

        //Size of the set
        int k = s.size();

        //Overwriting unique elements from set to array
        int j = 0;
        for(int val : s){
            nums[j++] = val;
        }
        return k;
    }
};