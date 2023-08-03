class Solution {
public:
    bool isValid(string st) {
        stack<char> s;

        for(char ch :st)
        {
            if(ch == '(' || ch == '{' || ch == '[')
            {
                s.push(ch);
            }
            else
            {
                if(s.empty() || 
                ch == ')' && s.top() != '(' || 
                ch == '}' && s.top() != '{' || 
                ch == ']' && s.top () != '[')
                {
                    return false;
                }
                s.pop();
            }
        }
        return s.empty();
    }
};