class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> se;
        int l=0;
        int res=0;
        for(int r=0 ; r<s.size() ; r++){
            while(se.count(s[r])){
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};
