class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26]={0} , l=0 , r=0 , maxLength=0 , maxFre=0;
        while(r<s.size()){
            count[s[r]-'A']++;
            maxFre=max(maxFre,count[s[r]-'A']);
            if(r-l+1-maxFre>k){
                count[s[l]-'A']--;
                l++;
            }
            maxLength=max(maxLength,r-l+1);
            r++;
        }
        return maxLength;
    }
};
