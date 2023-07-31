class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        for(char c: s)
        {
            if( c == '(' && cnt == 0)
            {
                cnt++;
            }
            else if(c=='(' && cnt >= 1)
            {
                ans += c;
                cnt++;
            }
            else if(c == ')' && cnt >1)
            {
                ans+=c;
                cnt--;
            }
            else 
            {
                cnt--;
            }
        }
        return ans;
    }
};