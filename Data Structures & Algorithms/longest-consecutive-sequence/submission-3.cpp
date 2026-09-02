class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> se(nums.begin(),nums.end());
        int longest=0;
        for(int num : se){
            if(se.find(num-1)==se.end()){
                int length=1;
                while(se.find(num+length)!=se.end()){
                    length++;
                }
                longest=max(length,longest);
            }
        }
        return longest;
    }
};
