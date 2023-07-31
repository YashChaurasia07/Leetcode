class Solution {
public:
    string largestOddNumber(string str) {
        int  i = str.length()-1;

        while(i>=0)
        {
            if(str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '9' || str[i] == '1')
            {
                return str;
            }
            str.pop_back();
            i--;
        }
        return str;
    }
};