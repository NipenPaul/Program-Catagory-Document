class Stack{
public:
    int val;
    Stack *next;
    Stack(int val){
        this->val = val;
        next = nullptr;
    }
};
class MyStack {
public:
    Stack* head = nullptr;
    int sz = 0;
    MyStack() {
    }
    
    void push(int x) {
        if(head == nullptr){
            head = new Stack(x);
        }else{
            Stack* newNode = new Stack(x);
            newNode->next = head;
            head = newNode;
        }
        sz++;
    }
    
    int pop() {
        Stack* tem = head;
        int topValue = tem->val;
        head = head->next;
        delete(tem);
        sz--;
        return topValue;
    }
    
    int top() {
        return head->val;
    }
    
    bool empty() {
        if(sz == 0) return true;
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
