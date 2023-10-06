class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0;
        int l = 0;
        int d = 0;
        int u = 0;
        for(auto it : moves)
        {
            if(it == 'U') u++;
            else if(it == 'D') d++;
            else if(it == 'R') r++;
            else if(it == 'L') l++;
        }
        if(r-l == 0 && u-d == 0) return true;
        return false;
    }
};