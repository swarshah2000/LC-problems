class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> s;
        string res;
        for (int i = 0; i < S.size(); i++){
            if (!s.empty()) 
                res += S[i];
            if (S[i] == '(')
                s.push(S[i]);
            else 
                s.pop();
            if (s.empty())
                res.pop_back();
        }
        return res;
    }
};