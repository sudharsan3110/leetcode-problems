class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> mp;
        
        if(hand.size() % groupSize != 0) return false;

        for(auto sh : hand) mp[sh]++;

        for(auto [sh,freq]:mp){
            if(freq==0) continue;
            while(freq--){
                for(int cur=sh;cur<sh+groupSize;cur++){
                    if(mp[cur]==0)return false;
                    mp[cur]--;
                }
            }
        }
    return true;}
};