class Solution {
public:
    void sortColors(vector<int>& nums) {
        int first = nums[0];
        for(int i =0;i<nums.size()-1;i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            } }   }
}};