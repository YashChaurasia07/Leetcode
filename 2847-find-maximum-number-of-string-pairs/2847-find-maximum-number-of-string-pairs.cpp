class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> rev;
        int cnt = 0;
        for(string s : words)
        {
            if(rev.count(s)) cnt++;
            else
            {
                string temp;
                temp += s[1];
                temp += s[0];
                rev.insert(temp);
            }
        }
        return cnt;
    }

};