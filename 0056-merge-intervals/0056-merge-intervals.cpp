class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //Sort the intervals based on starting time
        sort(intervals.begin(), intervals.end());

        //Result array to store merged interval
        vector<vector<int>> ans;

        //Loop through each interval
        int n = intervals.size();
        for(int i = 0; i < n; ){
            //Start & end of the current merged interval
            int start = intervals[i][0];
            int end = intervals[i][1];

            //Merge with all overlapping intervals
            int j = i+1;
            while(j < n && intervals[j][0] <= end){
                end = max(end, intervals[j][1]);
                j++;
            }

            //Add the merged interval to result
            ans.push_back({start, end});

            //Move to next overlapping interval
            i = j;
        }
        return ans;
    }
};