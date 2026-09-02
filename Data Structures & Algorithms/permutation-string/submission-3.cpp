class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> counts1(26,0);
        vector<int> counts2(26,0);
        for(int i=0 ; i<s1.size() ; i++){
            counts1[s1[i]-'a']++;
            counts2[s2[i]-'a']++;
        }
        int match=0;
        for(int i=0 ; i<26 ; i++){
            if(counts1[i]==counts2[i]) match++;
        }
        int l=0;
        for(int r=s1.size() ; r<s2.size() ; r++){
            if(match==26) return true;
            
            int index=s2[r]-'a';
            counts2[index]++;
            if(counts2[index]==counts1[index])  match++;
            else if(counts2[index]==counts1[index]+1) match--;

            index=s2[l]-'a';
            counts2[index]--;
            if(counts2[index]==counts1[index]) match++;
            else if(counts2[index]==counts1[index]-1) match--;

            l++;
        }
        return match==26;
    }
};
