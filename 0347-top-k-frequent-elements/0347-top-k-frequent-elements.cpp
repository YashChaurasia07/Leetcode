class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i = 0; i<nums.size(); i++)
        {  
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> h;
        for(auto i = m.begin(); i != m.end();i++)
        {
            h.push({i->second,i->first});
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
        return v;
    }
};