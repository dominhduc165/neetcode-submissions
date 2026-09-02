class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3) return 0;
        int l=0 , r=n-1;
        int water=0;
        vector<int> left(n);
        vector<int> right(n);
        left[0]=height[0];
        for(int i=1 ; i<n ; i++){
            if(height[i]>left[i-1]) left[i]=height[i];
            else left[i]=left[i-1];
        }
        right[n-1]=height[n-1];
        for(int i=n-2 ; i>=0 ; i--){
            right[i] = max(right[i+1],height[i]);
        }
        for(int i=1 ; i<n-1 ; i++){
            water+= min( left[i] , right[i] ) - height[i]; 
        }
        return water;
    }
};
