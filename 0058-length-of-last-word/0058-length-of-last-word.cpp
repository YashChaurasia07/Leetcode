class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int cnt = 0;
        while(s.back() == ' ')
        {
            s.pop_back();
        }
        for(int i = s.size()-1;i>=0;i--)
        {
            if(s[i] !=' ')
            {
                cnt++;
            }
            else
            {
                break;
            }
        }  
        return cnt;  
    }
};