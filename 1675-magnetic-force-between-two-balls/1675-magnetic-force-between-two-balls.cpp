class Solution {
public:
    bool isOkayAtDis(int mid,vector<int>& position, int m){
        int countOfBallsPlaced = 1, prevId =0;
        for(int i=1;i<position.size();i++){
            if(position[i]-position[prevId]>=mid){
                countOfBallsPlaced++;
            prevId=i;
            }
            
        }
    return (countOfBallsPlaced >=m);}
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1,r=*max_element(position.begin(),position.end()),ans=-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(isOkayAtDis(mid,position,m)){
                ans = mid;
                l = mid+1;
            }else{
                r= mid-1;
            }
        }
    return ans;}

};