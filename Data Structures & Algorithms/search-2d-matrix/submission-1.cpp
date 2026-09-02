class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int target_row = 0;
        if(matrix[0][0]>target) return false;
        for(int i=0 ; i<rows ; i++){
            if(matrix[i][0]>target){
                target_row = i-1;
                break;
            }
            else target_row=rows-1;
        }
        int l=0 , r=cols-1;
        while(l<=r){
            int m=(l+r)/2;
            if(matrix[target_row][m]==target) return true;
            else if(matrix[target_row][m]>target) r=m-1;
            else l=m+1;
        }
        return false;
    }
};
