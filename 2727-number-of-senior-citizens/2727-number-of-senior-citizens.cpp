class Solution {
public:
    bool hai(string num) {
        int n = num.length()-1;
        char ch = num[n-3];
        if(ch > '6')
        {
            return true;
        }
        else  if(ch == '6' && num[n-2]>='1')
        {
            return true;
        }

        return false;
    }
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(int i =0; i<details.size();i++)
        {
            if(hai(details[i]) == true)
            {
                cnt++;
            }
        }
        return cnt;
    }
};