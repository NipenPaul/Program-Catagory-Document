class FrequencyTracker {
public:
    map<int, int> ma1, ma2;
    FrequencyTracker() {
        ma1.clear();
        ma2.clear();
    }
    
    void add(int number) {
        int d = ma1[number];
        if(ma2[d] > 0){
            ma2[d]--;
        }
        ma1[number]++;
        d = ma1[number];
        ma2[d]++;
    }
    
    void deleteOne(int number) {
        int d = ma1[number];
        if(ma2[d] > 0){
            ma2[d]--;
        }
        if(ma1[number] > 0){
            ma1[number]--;
        }
        d = ma1[number];
        if(d > 0){
            ma2[d]++;
        }
    }
    
    bool hasFrequency(int frequency) {
        if(ma2[frequency] > 0) return true;
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */
