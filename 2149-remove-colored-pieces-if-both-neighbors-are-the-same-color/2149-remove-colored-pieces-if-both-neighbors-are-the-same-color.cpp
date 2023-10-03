class Solution {
public:
    bool winnerOfGame(string c) {
        int ca = 0, cb = 0;
        for (int i = 1; i < c.size() - 1; i++) 
        {
            char pre = c[i - 1];
            char nxt = c[i + 1];
            if (c[i] == 'A' && pre == 'A' && nxt == 'A') ca++;
            else if (c[i] == 'B' && pre == 'B' && nxt == 'B') cb++;
        }
        return ca > cb;
    }
};