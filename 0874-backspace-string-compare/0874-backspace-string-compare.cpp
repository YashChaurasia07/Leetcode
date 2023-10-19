class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string f = "";
        string l = "";
        for(int i = 0; i<s.length(); i++)
        {
            f += s[i];
            if(!f.empty() && s[i]== '#' ) 
            {
                f.pop_back();
                if(!f.empty()) f.pop_back();
            }
        }
        for(int i = 0; i<t.length(); i++)
        {
            l+= t[i];
            if(t[i]== '#' && !l.empty()) 
            {
                l.pop_back();
                if(!l.empty()) l.pop_back();
            }
        }
        cout<<f<<endl;
        cout<<l;
        if(f==l) return true;
        return false;
    }
};