#include "solution.hpp"

int main(){

  Solution sol;

  leettest(sol.isPowerOfTwo(4));
  leettest(sol.isPowerOfTwo(1));
  leettest(sol.isPowerOfTwo(256));
  leettest(!sol.isPowerOfTwo(255));
  return 0;
}
