class Solution {
    public void moveZeroes(int[] nums) {
        /**fuck what is the logic
        unless anything other one zero put it forward then add zero
         */
         int j =0;
         int count= 0;
         for(int i =0;i<nums.length;i++){
            if (nums[i]==0){
                count++;
            }
            if(nums[i]!=0){
                
                nums[j]=nums[i];
                j++;
            }
            
         }
         int n = nums.length-1;
         for(int i =0;i<count;i++){
            nums[n-i]=0;
         }
    }
}