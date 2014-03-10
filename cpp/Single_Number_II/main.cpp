#include "solution.hpp"

int main(){

  Solution sol;
  int lstA[] = {1,2,2,2,3,3,3,6,6,6,7,7,1,1,8,7}; // output 8
  leettest(sol.SingleNumber(lstA, 16) == 8);
  return 0;
}
