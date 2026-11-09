class Solution {
public:
    long long countValidSubstrings(string s) {
        int len = s.size();
        int valid_start = 0;
        long long ans = 0;
        for(int i=0;i<len;i++){
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                valid_start = i-1;
            }
            ans+= i - valid_start + 1;
        }
        return ans;
    }
};