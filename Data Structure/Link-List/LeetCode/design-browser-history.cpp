class DoubleLinkList{
public:
    string data;
    DoubleLinkList *prev, *next;
    DoubleLinkList(string url){
        data = url;
        prev = NULL;
        next = NULL;
    }
};

class BrowserHistory {
public:
    DoubleLinkList* head;
    DoubleLinkList* curr;
    BrowserHistory(string homepage) {
        head = new DoubleLinkList(homepage);
        curr = head;
    }
    
    void visit(string url) {
        DoubleLinkList* newNode = new DoubleLinkList(url);
        curr->next = newNode;
        newNode->prev = curr;
        curr = newNode;
    }
    
    string back(int steps) {
        while(steps > 0 && curr->prev != NULL){
            curr = curr->prev;
            steps--;
        }
        return curr->data;
    }
    
    string forward(int steps) {
        while(steps > 0 && curr->next != NULL){
            curr = curr->next;
            steps--;
        }
        return curr->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
