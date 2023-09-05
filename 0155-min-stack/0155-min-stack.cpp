class MinStack {
public:
    stack<long long int> s;
    long long int mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(long long int val) {
        if(s.empty())
        {
            s.push(val);
            mini = val;
        }
        else
        {
            if(val<mini)
            {
                s.push(2*val - mini); mini = val;
            } 
            else 
            {
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.empty()) return;
        long long int curr = s.top();
        s.pop();
        if(curr < mini)
        {
            mini = 2* mini - curr;
        }
    }
    
    int top() {
        if(s.empty()) return-1;
        if(s.top() < mini) return mini;
        else return s.top();
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */