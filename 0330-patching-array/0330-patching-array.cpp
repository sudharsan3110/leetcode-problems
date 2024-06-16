class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long int minNumberOfPatches=0, maxNumber=0, i=0, sz= nums.size();
        while(maxNumber < n){
            if(i < sz && (maxNumber+1 >= nums[i])){
                maxNumber += nums[i];
                i++;
            }else{
                minNumberOfPatches++;
                maxNumber += (maxNumber+1);
            }
        }
    return minNumberOfPatches;}
};