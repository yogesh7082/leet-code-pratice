class MyQueue {
public:
    stack<int> s3;
    stack<int> s2;
    MyQueue() {
    
        
        
    }
    
    void push(int x) {
       int size= s3.size();
        for(int i=0 ; i<size ; i++)
        {
            s2.push(s3.top());
            s3.pop();
        }
        s2.push(x);
        int size2=s2.size();
        for(int i=0 ; i<size2 ;i++)
        {
         s3.push(s2.top());
            s2.pop();
        }
        
    }
    
    int pop() {
        
        int temp =s3.top();
        s3.pop();
        return temp;
    }
    
    int peek() {
        return s3.top();
        
    }
    
    bool empty() {
        return  s3.size()==0;
        
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