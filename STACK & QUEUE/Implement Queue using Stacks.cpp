class MyQueue {
public:
    stack<int>inp,op;
    MyQueue() {
        
    }
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        int val=peek();
        op.pop();
        return val;
    }
    
    int peek() {
        if(op.empty())
        {
          while(!inp.empty())
          {
            op.push(inp.top());
            inp.pop();
          }
        }
        return op.top();
    }
    
    bool empty() {
        return inp.empty() && op.empty();
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
