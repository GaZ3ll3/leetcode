#include "../common/leetcode.h"

class Solution {
public:
    void kmp(string& needle, vector<int>& next) {
        auto n = needle.size();
        auto j = -1;
        next[0] = j;
        for (size_t i = 1; i < n; i++) {
            while (j > -1 && needle[j + 1] != needle[i]) {
                j = next[j];
            }
            if (needle[i] == needle[j + 1]) {
                j++;
            }
            next[i] = j;
        }
    }
    
    int strStr(string haystack, string needle) {
        auto n = haystack.size();
        auto m = needle.size();

        if (m == 0) return 0;
        vector<int> next(m);
        kmp(needle, next);
        auto j = -1;
        for (size_t i = 0; i < n; i++) {
            while (j > -1 && needle[j + 1] != haystack[i]) {
                j = next[j];
            } 
            
            if (haystack[i] == needle[j + 1]) j++;
            if (j == int(m) - 1) {
                return i - j;
            }
        }
        return -1;
    }
};
