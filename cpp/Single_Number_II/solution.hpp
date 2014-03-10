#include "../common/leetcode.h"

class Solution {
public:
  int SingleNumber(int A[], int n) { // to be edited here
    //records for each bits mod 3
    int one = 0, two = 0, three = 0;
    
    for (int i = 0; i < n; ++i){
      two |= one & A[i];
      one ^= A[i]; // as usual
      three = ~(one & two);
      one &= three;
      two &= three;
    }
    return one;
  }
};
