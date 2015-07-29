#include "../common/leetcode.h"

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) { // to be edited here
        int rows = matrix.size();
        if (rows == 0 || matrix[0].size() == 0) return false;
        int i = 0, j = matrix[0].size() - 1;
        while(i < rows && j >= 0){
            if (target == matrix[i][j]) return true;
            else if (target > matrix[i][j]) i++;
            else j--;
        }
        return false;
    }
};
