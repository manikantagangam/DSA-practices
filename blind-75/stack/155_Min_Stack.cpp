class MinStack {
public:
    vector<pair<int, int>> s; 
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            pair<int, int> p;
            p.first = val;
            p.second = val;
            s.push_back(p);
        }
        else{
            pair<int, int> p;
            p.first = val;
            p.second = min(val, s.back().second);
            s.push_back(p);
        }
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s.back().first;
    }
    
    int getMin() {
        return s.back().second;
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