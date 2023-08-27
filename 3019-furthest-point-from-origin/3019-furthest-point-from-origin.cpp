class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int count = 0;int u = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] =='L') count--;
            else if(s[i] == 'R') count++;
            else u++;
        }
        if(count<0) count *= -1; 
        return u+count;
    }
};
