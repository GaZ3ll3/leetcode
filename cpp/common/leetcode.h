#include <set>
#include <cmath>
#include <stack>
#include <deque>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void leettest(bool state){
	if (state==true) cout<<"PASS" << endl;
	else cout << "FAIL" << endl;
}


int comp_vec(std::vector<int> u, std::vector<int> v){

        size_t n = u.size();
        size_t m = v.size();

        if (n > m) {
                for (std::vector<int>::size_type i = 0 ; i < n; i++){
                        if (u[i] < v[i]) return 1;
                        if (u[i] > v[i]) return -1;
                        if (u[i] == v[i]) continue;
                }
                return 0;
        }
        else {
                for (std::vector<int>::size_type i = 0 ; i < m; i++){
                        if (u[i] < v[i]) return 1;
                        if (u[i] > v[i]) return -1;
                        if (u[i] == v[i]) continue;
                }
                return 0;
        }
}

