#include "../common/leetcode.h"

class Solution {
public:
    int evalRPN(vector<string> &tokens) { // to be edited here
      stack<int> st;
      for(size_t i = 0; i != tokens.size(); i++){
		if (  ( (tokens[i][0]=='-') && (tokens[i].size()>1)  ) || ((tokens[i][0]>='0') && (tokens[i][0]<='9'))){
		  st.push(atoi(tokens[i].c_str()));
		  continue;
		}
	int a = st.top();st.pop();
	int b = st.top();st.pop();
	if (tokens[i][0] == '+') st.push(b+a);
	if (tokens[i][0] == '-') st.push(b-a);
	if (tokens[i][0] == '*') st.push(b*a);
	if (tokens[i][0] == '/') st.push(b/a);
    }
     
    return st.top();
   }
};
