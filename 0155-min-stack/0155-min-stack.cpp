class MinStack {
    stack< int> s;
    long long min;
   
public:
    MinStack() {
       min =  INT_MAX;
    }
    
    void push(int value) {
          long long val = value;
          if(s.empty()){
            min=val;
            s.push(val);
          }
          else{
            if(val<min){
                s.push(2*val*1LL -min);
                min =val;
            }else{
                s.push(val);
            }
          }

}
    
    void pop() {
        if(s.empty())return;
        long long el = s.top();
        s.pop();
        if(el<min){
            min=2*min-el;
        }
    }
    
    int top() {
      if(s.empty())return -1;
      long long el = s.top();
      if(el < min) 
        {return min;}
      return el;
    }
    
    int getMin() {
        return min;
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