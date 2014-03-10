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
