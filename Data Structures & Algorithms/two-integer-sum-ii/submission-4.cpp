class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0 , r=numbers.size()-1;
        while(l<r){
            int tmp = numbers[l]+numbers[r];
            if(tmp==target) return {l+1,r+1};
            else if(tmp>target) r--;
            else l++;
        }
    }
};
