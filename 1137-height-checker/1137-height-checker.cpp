class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> hcopy(heights);
        sort(hcopy.begin(),hcopy.end());
        int cnmt = 0;
        for(int i = 0; i<heights.size();i++){
            if(heights[i]!=hcopy[i]){cnmt++;}
        }
    return cnmt;}
};