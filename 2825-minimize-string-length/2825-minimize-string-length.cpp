class Solution {
public:
    int minimizedStringLength(string s) {
        int ans = 0;
        unordered_set<char> unique;
        for (char c : s) {
            unique.insert(c);
        }

        return unique.size();
    }
};