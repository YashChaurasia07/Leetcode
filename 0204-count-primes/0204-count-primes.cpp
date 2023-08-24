class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v(n);
        for(int i = 2; i<n;i++)
            v[i] = true;

        for(long long int i=2;i<n;i++){
            if(!v[i]) continue;
            for(long long int j = i*i;j<n;j+=i){
                v[j] = false;
            }
        }
        long long int count = 0;
        for(long long int i = 2;i<n;i++)
            if(v[i]==true) count++;
        return count;    
    }
};