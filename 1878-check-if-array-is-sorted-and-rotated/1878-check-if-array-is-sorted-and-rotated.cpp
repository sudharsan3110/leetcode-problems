class Solution {
public:
    bool check(vector<int>& nums){
        int bk = 0;
        int count = 0;
        int n = nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1])
            count++;
        else if(nums[n-1] <= nums[0]){
            bk++;

        }
        }
cout<<bk<<" "<<count<<endl;
    if(bk == 1 && count == n -2)
        return true;
    else if(count == nums.size() -1 )
        return true;
    else 
        return false;

    }
};