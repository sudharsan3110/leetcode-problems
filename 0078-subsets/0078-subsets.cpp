class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> tempList;
        backtrack(result,tempList,nums,0);
        return result;
    }

    private:
    void backtrack(vector<vector<int>>& result, vector<int>& tempList, vector<int>& nums, int start) {
        result.push_back(tempList);  // Add the current subset to the result
        for (int i = start; i < nums.size(); ++i) {
            tempList.push_back(nums[i]);  // Include nums[i]
            backtrack(result, tempList, nums, i + 1);  // Recur with nums[i] included
            tempList.pop_back();  // Backtrack: remove nums[i]
        }
    }
};