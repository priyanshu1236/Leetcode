class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int maxRow = 0;
            for (int i = 0; i < m; i++) {
                if (matrix[i][mid] > matrix[maxRow][mid]) {
                    maxRow = i;
                }
            }

            int leftVal = (mid == 0) ? -1 : matrix[maxRow][mid - 1];
            int rightVal = (mid == n - 1) ? -1 : matrix[maxRow][mid + 1];

            if (matrix[maxRow][mid] > leftVal && matrix[maxRow][mid] > rightVal) {
                return {maxRow, mid};
            }
            else if (leftVal > matrix[maxRow][mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};