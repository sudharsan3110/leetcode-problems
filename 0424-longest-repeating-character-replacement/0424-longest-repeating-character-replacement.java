class Solution {
    public int characterReplacement(String s, int k) {
        int left = 0;
        int right = 0;
        int[] hash = new int[26];
        int ans = 0;
        int maxf =0;
        for(right=0;right<s.length();right++){
            hash[s.charAt(right)-'A']++;
            maxf = Math.max(maxf,hash[s.charAt(right)-'A']);
            if(right-left+1-maxf > k){
                hash[s.charAt(left)-'A']--;
                left++;
            }
            ans = Math.max(ans,right-left+1);
           

        }        
        
  return ans;
         }
        
    }
