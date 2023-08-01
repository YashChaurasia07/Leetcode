class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(int i = 0; i<s.length();i++)
        {
            m[s[i]]++;
        }
        string s1 ="";
        vector<pair<char,int>>v(m.begin(),m.end());
        sort(v.begin(), v.end(), [](const pair<char,int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });
        for(auto x : v)
        {
            for(int i = 0; i<x.second;i++)
            {
                s1+=x.first;
            }
        }
        return s1;
    }
};