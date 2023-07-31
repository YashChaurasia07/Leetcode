class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        int n = s.size();
        string f = s[0];
        string l = s[n-1];
        int count = 0;
        for(int i = 0; i < min(f.size(),l.size()); i++)
        {
            if(f[i]!=l[i])
            {
                return f.substr(0,count); 
            }
            count++;
        }
        return s[0].substr(0,count);
    }
};