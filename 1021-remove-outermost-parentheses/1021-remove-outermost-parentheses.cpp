class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> s;
        string res;
        for (int i = 0; i < S.size(); i++){
            
            if (S[i] == '('){
                
                if(s.size()>0 )
                    res+=S[i];
                s.push(S[i]);
            }
            else{
                 s.pop();
                if(s.size()>0 )
                    res+=S[i];
            }
           
            
        }
        return res;
    }
};