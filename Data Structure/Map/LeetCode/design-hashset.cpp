class MyHashSet {
public:
    bool cnt[1000001];
    MyHashSet() {
        memset(cnt, false, sizeof(cnt));
    }
    
    void add(int key) {
        cnt[key] = true;
    }
    
    void remove(int key) {
        cnt[key] = false;
    }
    
    bool contains(int key) {
        return cnt[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
