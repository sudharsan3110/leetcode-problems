class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> cumulativeSum(n + 1, 0);
        
        // Step 1: Create Cumulative Sums
        for (int i = 1; i <= n; i++) {
            cumulativeSum[i] = cumulativeSum[i - 1] + nums[i - 1];
        }
        
        // Step 2: Iterate Through Starting Points
        for (int start = 0; start < n - 1; start++) {
            // Step 3: Expand the Subarray
            for (int end = start + 1; end < n; end++) {
                // Step 4: Calculate the Sum
                int subarraySum = cumulativeSum[end + 1] - cumulativeSum[start];
                
                // Step 5: Check if the Sum is a Multiple of k
                if (subarraySum == 0 && k == 0) { // Handling special case where k is 0
                    return true;
                }
                if (k != 0 && subarraySum % k == 0) {
                    return true;
                }
            }
        }
        
        // Step 6: Return the Result
        return false;
    }
};