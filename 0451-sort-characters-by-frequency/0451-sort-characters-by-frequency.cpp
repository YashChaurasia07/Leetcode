class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(int i = 0; i<s.length();i++)
        {
            m[s[i]]++;
        }
        string s1 ="";
        
        priority_queue<pair<int,char>> q;
        for(auto it : m)
            q.push({it.second,it.first});

        
        while(!q.empty())
        {
            for(int i = 0; i<q.top().first;i++)
            {
                s1+=q.top().second;
            }
            q.pop();
        }
        return s1;
    }
};