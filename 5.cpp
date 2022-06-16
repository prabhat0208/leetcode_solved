class Solution {
public:
    string longestPalindrome(string s) {
         if(s.size() == 0)
            return "";
    
         bool dp[s.size()][s.size()];
         memset(dp, 0, sizeof(dp));
    
        for(int i=0; i<s.size(); i++){
             dp[i][i] = true;
        }
        
        string ans = "";
        ans += s[0];
    
        for(int i=s.size()-1; i>=0; i--)
       {
            for(int j=i+1; j<s.size(); j++)
            {
                  if(s[i] == s[j]){
                       if(j-i == 1 || dp[i+1][j-1]){
                            dp[i][j] = true;
                    
                       if(ans.size() < j-i+1)
                           ans = s.substr(i, j-i+1 );
                       }
                  }
             }
        } 
       return ans;
   } 
};