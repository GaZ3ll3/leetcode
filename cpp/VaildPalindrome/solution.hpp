#include "../common/leetcode.h"

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n-1;
        while(i<=j){
            if (!jan(s[i])) {
                ++i; continue;
            }
            if (!jan(s[j])) {
                --j; continue;
            }
            if (check(s[i],s[j])){
                ++i;--j;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
    
    
    bool jan(char x){
        if (((x >='a') and (x<='z')) or ((x>='0') and (x<='9')) or ((x >= 'A') and (x <= 'Z'))) {
            return true;
        }
        return false;
    }

    bool check(char x, char y){
        if (jan(x) and jan(y)){
            if (((x-'a') == (y-'a')) or ((x-'A') == (y-'A')) or ((x-'a') == (y-'A')) or ((x-'A') == (y-'a'))){
                return true;
            }
        }
        return false;
    }
};