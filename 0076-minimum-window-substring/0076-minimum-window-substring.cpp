class Solution {
public:
    string minWindow(string s, string t) {

        if(t.length() > s.length()) return "";
        int i = 0, j = 0, len = INT_MAX;
        int n = s.length();
        string ans = "";
        map<char,int> m;
        for(char ch : t)
        {
            m[ch]++;
        }
        int count = m.size();
        int start= 0;
        while(j<n)
        {
            if(m.find(s[j]) != m.end())
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                {
                    count--;
                }
            }

            if(count == 0)
            {
                while(count == 0)
                {
                    if(j-i+1 < len)
                    {
                        len = j-i+1;
                        start = i;
                    }

                    if(m.find(s[i]) != m.end())
                    {
                        m[s[i]]++;
                        if(m[s[i]]>0)
                        {
                            count++;
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        if(len == INT_MAX)
        {
            return "";
        }
        else{
            return s.substr(start,len);
        }
    }
};