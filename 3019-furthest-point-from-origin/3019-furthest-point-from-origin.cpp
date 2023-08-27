class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int c1=0,c2=0;
        for(auto i: s){
            if(i=='L'){c1--; c2--;}
            else if(i=='_'){c1--; c2++;}
            else if(i=='R'){c1++; c2++ ;}
        }
        return max(abs(c2),abs(c1));
    }
};