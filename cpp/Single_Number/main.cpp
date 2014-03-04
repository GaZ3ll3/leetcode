#include "solution.h"

int main(){
  int A[] = {1,2,2,3,3,4,4,5,5,6,6,7,8,8,1}; //  output 7
  int B[] = {100,200,201,202,203,301,302,301,203,202,201,200,100}; // output 302
  int C[] = {14,24,34,54,76,12,19,43,23,54,12,14,90,43,24,76,19,34,23};// output 90
  int An = 15;
  int Bn = 13;
  int Cn = 19;

  Solution sol;

  leettest(sol.SingleNumber(A,An) == 7);
  leettest(sol.SingleNumber(B,Bn) == 302);
  leettest(sol.SingleNumber(C,Cn) == 90);

  return 0;
}
