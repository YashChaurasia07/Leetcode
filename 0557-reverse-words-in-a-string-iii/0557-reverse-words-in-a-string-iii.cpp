class Solution {
public:
    void revKar(string &s,int j, int i)
    {
        for(int k = j; k<i; k++)
        {
            if(i==j) break;
            swap(s[j],s[i-1]);
            i--;
            j++;
        }
    }
    string reverseWords(string s) {
        int j = 0;
        for(int i = 0;i<s.length(); i++)
        {
            if(s[i] == ' ')
            {
                revKar(s,j,i);
                j=i+1;
            }
        }
        revKar(s,j,s.length());
        return s;
    }
};