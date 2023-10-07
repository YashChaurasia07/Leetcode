class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> keyboardRows = {"QWERTYUIOPqwertyuiop", "ASDFGHJKLasdfghjkl", "ZXCVBNMzxcvbnm"};

        vector<string> vRes {};
        for (const auto& word : words)
            for (const auto& row : keyboardRows)
                if (word.find_first_not_of(row) == string::npos)
                    vRes.push_back(word);
        return vRes;
    }
};