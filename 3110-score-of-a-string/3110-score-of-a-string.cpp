class Solution {
public:
    int scoreOfString(string s) {
     int str1 = 0;
        
        for(int i =0;i<s.length()-1;i++){
            str1 = str1 + abs(s[i]-s[i+1]);
        } 
            return str1;
        }

};