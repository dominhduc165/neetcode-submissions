class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp1;
        for(char c : s1) mp1[c]++;
        unordered_map<char,int> mp2;
        for(int i=0 ; i<s1.size() ; i++){
            mp2[s2[i]]++;
        }
        if(mp1==mp2) return true;
        for(int i=s1.size() ;  i<s2.size() ; i++){
            if(mp1==mp2) return true;
            char left=s2[i-s1.size()];
            mp2[left]--;
            if(mp2[left]==0) mp2.erase(left);
            mp2[s2[i]]++;
            if(mp1==mp2) return true;
        }
        return false;
    }
};
