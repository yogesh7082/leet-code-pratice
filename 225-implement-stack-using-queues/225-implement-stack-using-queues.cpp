class MyStack {
public:
          queue<int> a;

    MyStack() {
      
        
    }
    
    void push(int x) {
        a.push(x);
            for(int i =0 ; i< a.size()-1 ;i++)
            {
                a.push(a.front());
                a.pop();
            }
        
        
    }
    
    int pop() {
        int temp =a.front();
        a.pop();
        return temp;
        
    }
    
    int top() {
        return a.front();
    }
    
    bool empty() {
        if(a.size()==0)
        {
            return true;
        }
        else
            return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */