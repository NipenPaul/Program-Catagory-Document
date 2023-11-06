class SeatManager {
public:
    set<int> se;
    SeatManager(int n) {
        for(int i = n; i >= 1; i--){
            se.insert(i);
        }
    }
    
    int reserve() {
        int x = *se.begin();
        se.erase(se.begin());
        return x;
    }
    
    void unreserve(int seatNumber) {
        se.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */