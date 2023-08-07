class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int ans = 0, i = 0, j = 0;
        unordered_map<char,int> m;
        while(j<s.length())
        {
            m[s[j]]++;
            if(m.size() < j-i+1)
            {
                while( m.size() < j-i+1)
                {
                    m[s[i]]--;
                    if(m[s[i]] == 0) m.erase(s[i]);
                    i++;
                }
            }
            if(m.size() ==j-i+1)
            {
                ans = max(ans, j-i+1);
            }
            j++;
        }  
        return ans;
    }
};