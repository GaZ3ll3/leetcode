#include "solution.hpp"

int main(){

  string haystack = "AAAAABBBCCCCBBBABBBBABBAAAABBABABA";
  string needle1 = "ABABAB";
  string needle2 = "ABAB";
  Solution sol;

  leettest(sol.strStr(haystack, needle1) == -1);
  leettest(sol.strStr(haystack, needle2) == 29);

  return 0;
}
