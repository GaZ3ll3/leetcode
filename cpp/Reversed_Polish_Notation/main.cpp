#include "solution.h"

int main(){

  Solution sol;
  string lstA[] = {"2", "1", "+", "3", "*"};
  vector<string> lstB;
  lstB.assign(lstA,lstA+5);
  leettest(sol.evalRPN(lstB) == 9);

  return 0;
}
