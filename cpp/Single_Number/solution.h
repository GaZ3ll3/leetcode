#include "../common/leetcode.h"

class Solution {
public:
    int SingleNumber(int A[], int n) {
        int res = A[0];
        for (int i = 1; i < n ; ++i){
            res = res^A[i];
        }
        return res;
    }
};
