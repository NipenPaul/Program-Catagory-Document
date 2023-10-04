class MyHashMap {
public:
    int cnt[(int)1e6+1];
    MyHashMap() {
        memset(cnt, -1, sizeof(cnt));
    }
    
    void put(int key, int value) {
        cnt[key] = value;
    }
    
    int get(int key) {
        return cnt[key];
    }
    
    void remove(int key) {
        cnt[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */