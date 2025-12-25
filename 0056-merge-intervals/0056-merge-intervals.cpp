class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //Sort intervals to being all overlapping time intervals together
        sort(intervals.begin(), intervals.end());
        
        //Empty array to store merged intervals
        vector<vector<int>> ans;

        //Iterate over all intervals
        for(auto interval : intervals){
            //If array is empty or interval is non overlapping
            if(ans.empty() ||ans.back()[1] < interval[0]){
                //Add as new interval
                ans.push_back(interval);
            } else{ //Overlapping
                //Update the current merged intervals ending time
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }
        //Return ans
        return ans;
    }
};