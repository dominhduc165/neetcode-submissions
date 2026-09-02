class Solution {
public:
    bool isPalindrome(string s) {
        string tmp="";
        for(char c : s){
            if(isalnum(c)){
                tmp+=tolower(c);
            }
        }
        return tmp== string(tmp.rbegin(),tmp.rend());
    }
};
