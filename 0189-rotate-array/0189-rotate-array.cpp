class Solution {
public:

void reversed(vector<int>& arr,int start,int end){
        while(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end]= temp;
            start++;
            end--;
        }}
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        k%=n;
        
       reversed(nums,0,n-1);
       reversed(nums,0,k-1);
       reversed(nums,k,n-1);
      
        
    }
    
        
    
    
        
    };
    
