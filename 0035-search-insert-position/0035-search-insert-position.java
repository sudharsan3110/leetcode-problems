class Solution {
    public int searchInsert(int[] nums, int target) {
        int low = 0;
        int right  = nums.length-1;
        while(low<=right){
            int mid = (right-low)/2+low;
            if(nums[mid] == target) return mid;
            else if (nums[mid]>target)
                right = mid-1;
            else 
                low = mid+1;
        }
    return low;
    }
}