class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> se;
        for(int i=0 ; i<nums.size() ; i++){
            if(se.count(nums[i])) return true;
            se.insert(nums[i]);
        }
        return false;
    }
};