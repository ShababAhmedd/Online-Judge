class Solution {
public:
    stack<int> st_s, st_t;
    bool backspaceCompare(string s, string t) {
        for (char c : s) {
            if (c == '#') {
                if (!st_s.empty()) {
                    st_s.pop();
                }
            } else {
                st_s.push(c);
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!st_t.empty()) {
                    st_t.pop();
                }
            } else {
                st_t.push(c);
            }
        }

        if (st_s.size() != st_t.size()) {
            return false;
        }
        
        bool flag = true;
        while (!st_s.empty()) {
           if (st_s.top() != st_t.top()) {
            flag = false;
            break;
           } else {
            st_s.pop();
            st_t.pop();
           }
        }

        if (flag) return true;
        else return false;
    }
};


// https://leetcode.com/problems/backspace-string-compare/
