class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> v(temperatures.size());
        for(int i=0 ; i<n-1 ; i++){
            v[i]=0;
            for(int j=i+1 ; j<n ; j++){
                if(temperatures[j]>temperatures[i]){
                    v[i]=j-i;
                    break;
                }
            }
        }
        return v;
    }
};
