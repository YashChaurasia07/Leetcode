class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int ans = 0;
        int c = 0;
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            if(i != 0 && forts[i] == 0) c++;
            else
            {
                if(forts[j] != forts[i] && forts[j] != 0) ans = max(ans,c);
                j=i;
                c=0;
            }
        }
        return ans;
    }
};