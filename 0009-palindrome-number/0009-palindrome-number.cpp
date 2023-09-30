class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int val = x;
        long rem=0;
        while (x!=0){
            int temp = x%10;
            rem = rem *10+temp;
            x/=10; 
        }
        if(val==rem){
            return true;
        }else{
            return false;
        }
    }
};