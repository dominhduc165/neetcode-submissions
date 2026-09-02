class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(nums1.begin(),nums1.end());
        for(int x : nums2) v.push_back(x);
        sort(v.begin(),v.end());
        if(v.size()%2==0){
            return (double) (v[v.size()/2]+v[v.size()/2 -1])/2;
        }
        else{
            return v[v.size()/2];
        }
    }
};
