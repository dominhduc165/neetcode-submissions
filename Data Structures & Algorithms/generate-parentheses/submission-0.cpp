class Solution {
public:
    void backtrack(int openN , int closeN , int n , vector<string>& res , string &s){
        if(openN==closeN && openN==n){
            res.push_back(s);
            return;
        }
        if(openN<n){
            s += "(";
            backtrack(openN+1,closeN,n,res,s);
            s.pop_back();
        }
        if(closeN<openN){
            s+=")";
            backtrack(openN,closeN+1,n,res,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        backtrack(0,0,n,res,s);
        return res;
    }
};
