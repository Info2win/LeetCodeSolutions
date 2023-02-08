class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0;
        int right= matrix[0].size()-1;
        int mid;
        int row = matrix.size();
        for(int i=0; i<row;++i){ // new row
            left=0;
            while(left<=right){
                mid = left + ((right-left)/2);
                if(matrix[i][mid]<target){
                    left = mid +1;
                }
                else if(matrix[i][mid] > target){
                    right = mid - 1;
                }
                else return true;
            }
        }
        return false;
    }
};