class Solution {
public:
    void func(int ind, int sum, vector<int> &list, vector<int> &candidates, vector<vector<int>> &res){
        if(sum==0){
            res.push_back(list);
            return;
        }
        if(sum<0) return;
        if(ind>=candidates.size()) return;
        //Excluding the current element
        func(ind+1, sum, list, candidates, res);
        //Including the current element
        list.push_back(candidates[ind]);
        func(ind, sum-candidates[ind], list, candidates, res);
        list.pop_back();

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> list;
        vector<vector<int>> res;
        func(0, target, list, candidates, res);
        return res;
    }
};