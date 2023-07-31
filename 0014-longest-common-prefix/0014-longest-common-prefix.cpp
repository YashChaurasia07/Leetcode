class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // for(int i = 0; i<strs.size()-1;i++)
        // {
        //     string t = strs[i];
        //     string f = strs[i+1];
        //     int n =f.size();
        //     if(t.size() > f.size())
        //     {
        //         n = t.size();
        //     }
        //     for(int j = 0; j<n;i++)
        //     {
        //         if( t[i] == f[i])
        //         {
        //             s += f[i];
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     if(s == "")
        //     {
        //         return s;
        //     }
        // }
        string str;
        int count = 0;
        int min = 1000;
        for(int i = 0; i<strs.size();i++)
        {
            int len= strs[i].length();
            if(len < min)
            {
                min = len;
                str = strs[i];
            }
        }
        for(int i = 0; i<min;i++)
        {
            for(int j = 0; j<strs.size();j++)
            {
                if(strs[j][i] !=str[i])
                {
                    return str.substr(0,count);
                }
            }
                count++;
        }
        return str.substr(0,count);
    }
};