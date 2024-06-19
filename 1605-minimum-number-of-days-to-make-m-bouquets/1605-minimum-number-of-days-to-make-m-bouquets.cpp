class Solution {
public:
int isOkayDay(int mid,vector<int>& bloomDay,int m,int k)
    {
       int conseCount = 0,numberOfBouquet = 0;
       for(int i =0; i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){conseCount++;}
        else {conseCount = 0;}

        if(conseCount==k){
            numberOfBouquet++;
            conseCount=0;

        }
       }
        return numberOfBouquet >= m;
        }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long)m*k > n) return -1;

        int l=1,r=*max_element(bloomDay.begin(),bloomDay.end()),ans = -1;;
        
        while(l <= r){
            int mid=((l+r)/2);
            if(isOkayDay(mid,bloomDay,m,k)){
                ans = mid;
                r = mid -1;
            }
            else{
                l = mid +1;
            }
        }
       
        return ans;
    }
    
};