class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> h;
        for(int i = 0; i<arr.size(); i++)
        {
            h.push({abs(x-arr[i]),arr[i]});
            if(h.size()>k)
            {
                h.pop();
            }
        }
        vector<int> v;
        while(!h.empty())
        {
            v.push_back(h.top().second);
            h.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};