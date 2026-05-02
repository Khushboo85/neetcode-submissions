class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        int row = matrix.size();
        int high = col * row -1, low = 0;
        while(low<= high){
            int mid = (low +(high-low)/2);
            int r = mid/ col;
            int c = mid % col;
            if(matrix[r][c] == target )
                return true;
            else if(target > matrix[r][c] )
                low = mid+1;
            else
                high = mid-1;
        }
        return false;
        
    }
};
