class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int Prefix[nums.size()];
        int Postfix[nums.size()];
        for(int i=0 ; i<nums.size() ; i++){
            if(i==0) Prefix[i]=nums[i];
            else Prefix[i]=Prefix[i-1]*nums[i];
        }
        for(int i=nums.size()-1 ; i>=0 ; i--){
            if(i==nums.size()-1) Postfix[i]=nums[i];
            else Postfix[i] = Postfix[i+1]*nums[i];
        }
        vector<int> kq (nums.size(),0);
        kq[0]=Postfix[1];
        kq[kq.size()-1]=Prefix[kq.size()-2];
        for(int i=1 ; i<kq.size()-1 ; i++){
            kq[i]=Prefix[i-1]*Postfix[i+1];
        }
        return kq;
    }
};
