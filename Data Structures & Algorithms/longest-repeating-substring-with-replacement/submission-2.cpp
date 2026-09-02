class Solution {
public:
    int characterReplacement(string s, int k) {
        int max_fre=0, max_length=0 , l=0 , count[26]={0};
        for(int r=0 ; r<s.size() ; r++){
            count[s[r]-'A']++;
            max_fre=max(max_fre,count[s[r]-'A']);
            if((r-l+1)-max_fre>k){
                count[s[l]-'A']--;
                l++;
            }
            max_length = max(max_length , r-l+1);
        }
        return max_length;
    }
};
