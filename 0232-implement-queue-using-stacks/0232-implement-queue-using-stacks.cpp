class MyQueue {
  stack<int> i;
  stack<int> o;
public:
    MyQueue() {
      
    }
    
    void push(int x) {
        i.push(x);
    }
    
    int pop() {
        while(!i.empty()){
            o.push(i.top());
            i.pop();
        }
        int result =  o.top();
        o.pop();
        while(!o.empty()){
            i.push(o.top());
            o.pop();
        }
        return result;
    }
    
    int peek() {
        while(!i.empty()){
            o.push(i.top());
            i.pop();
        }
        int result =  o.top();
        
        while(!o.empty()){
            i.push(o.top());
            o.pop();
        }
        return result;
    }
    
    bool empty() {
        return i.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */