#include "../common/leetcode.h"

class Solution {
public:
    vector<vector<int> > permutation(vector<int> &num) { // to be edited here
        std::vector<std::vector<int> > res;
        permutation(num, 0, (num.size() - 1), res);
        return res;
    }

    void permutation(std::vector<int> num, int k , int n, std::vector<std::vector<int> > &res){
    	if (k == n){
    		res.push_back(num);	
    	} // fixed number reach last
    	else{
    		for (int i = k ; i <=n; i++){
    			int tmp = num[k]; // swap
    			num[k]  = num[i];
    			num[i]  = tmp;

    			permutation(num, k + 1, n , res); // fix one more number
 
    			tmp    = num[k]; // restore.
    			num[k] = num[i];
    			num[i] = tmp;
    		} // first k - 1 numbers are fixed.
    	}
    }
};


int compare(std::vector<int> u, std::vector<int> v){

	size_t n = u.size();
	size_t m = v.size();

	if (n > m) {
		for (std::vector<int>::size_type i = 0 ; i < n; i++){
			if (u[i] < v[i]) return true;
			if (u[i] > v[i]) return false;
			if (u[i] == v[i]) continue;
		}
		return false;
	}
	else {
		for (std::vector<int>::size_type i = 0 ; i < m; i++){
			if (u[i] < v[i]) return true;
			if (u[i] > v[i]) return false;
			if (u[i] == v[i]) continue;
		}
		return false;
	}
}