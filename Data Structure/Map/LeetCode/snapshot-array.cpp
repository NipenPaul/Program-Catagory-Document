class SnapshotArray {
public:
    vector<map<int, int>> vec;
    int cnt;
    SnapshotArray(int length) {
        cnt = 0;
        vec.resize(length);
        for(auto &it: vec){
            it[0] = 0;
        }
    }
    
    void set(int index, int val) {
        vec[index][cnt] = val;
    }
    
    int snap() {
        cnt++;
        return cnt-1;
    }
    
    int get(int index, int snap_id) {
        auto &it = vec[index];
        auto it2 = it.upper_bound(snap_id);
        return (--it2)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
