class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> freq;
        for(auto el:arr1) freq[el]++;

        vector<int> ans;
        for(auto el:arr2){
            while(freq[el]--){
                ans.push_back(el);
            }
        }
        for(auto [el,f]:freq){
            while(f>0 && f--){
                ans.push_back(el);
            }
        }
    return ans;}
};