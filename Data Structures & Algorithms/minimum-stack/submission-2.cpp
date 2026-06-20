class MinStack {
public:
    stack<int> st;
    stack<int> minst;

    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if(minst.empty()){
            minst.push(val);
        } else {
            if (val <= minst.top()){
                minst.push(val);
            }
        }
    }
    
    void pop() {
        int x = st.top();
        st.pop();
        if (x == minst.top()){
            minst.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
