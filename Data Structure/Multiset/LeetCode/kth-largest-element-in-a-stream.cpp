class KthLargest {
public:
    multiset<int> mse;
    int kk;
    KthLargest(int k, vector<int>& nums) {
        kk = k;
        for(int &x: nums){
            mse.insert(x);
        }
        while(mse.size() > k){
            mse.erase(mse.begin());
        }
    }
    
    int add(int val) {
        if(kk == mse.size() && val <= *mse.begin()){
            return *mse.begin();
        }
        if(mse.size() >= kk)
            mse.erase(mse.begin());
        mse.insert(val);
        return *mse.begin();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
