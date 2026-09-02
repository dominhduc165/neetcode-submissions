class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0 , r=heights.size()-1;
        int _max=0;
        while(l<r){
            int cur_heights=min(heights[l],heights[r]);
            _max=max(cur_heights*(r-l),_max);
            if(cur_heights==heights[l]) l++;
            else r--;
        }
        return _max;
    }
};
