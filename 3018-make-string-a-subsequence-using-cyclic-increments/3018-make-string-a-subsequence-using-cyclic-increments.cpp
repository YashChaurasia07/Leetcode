class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str2.length(), m =str1.length();
        if(n > m) return 0;
        int i = 0,j=0;
        while(i<m && j<n){
            if(str1[i] == str2[j] || (str1[i] == 'z' && str2[j] == 'a') || str1[i]+1 ==str2[j]){
                j++;
            }
            i++;
        }
        if(n == j) return 1;
        return 0;
    }
};