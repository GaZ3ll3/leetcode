#include "../common/leetcode.h"

class Solution {
public:
    bool isPowerOfTwo(int n) { // to be edited here
        return (n > 0) && (n & (n - 1)) == 0;
    }
};
