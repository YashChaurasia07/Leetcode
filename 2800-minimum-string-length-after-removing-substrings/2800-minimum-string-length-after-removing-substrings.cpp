class Solution {
public:
    int minLength(string s) {
        string temp ="";
        for(int i = 0;i<s.length(); i++)
        {
            if(temp.size() == 0)
            {
                temp += s[i];
            }
            else if(s[i] == 'B' && temp.back() == 'A' || s[i] == 'D' && temp.back() == 'C')
            {
                temp.pop_back();
            }
            else
            {
                temp += s[i];                
            }
        }
        return temp.length();
    }
};