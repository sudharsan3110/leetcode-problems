class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        if(count>0){
            sort(nums.begin(),nums.end());
        if(nums[0]==0 && (nums[nums.size()-1]==0)) return;
        while(nums[0]==0 && nums.size() > 1){
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
            

        }
    }
};