#include "solution.hpp"

int main(){

  Solution sol;
  vector<vector<int> > A;
  A.resize(5);
  for (int i = 0 ; i < 5; i++)
  {
    A[i].resize(5);
    for (int j = 0; j < 5; j++)
    {
     A[i][j] = 5 * i + j; 
    }
  }

  leettest(sol.searchMatrix(A, 15));

  return 0;
}
