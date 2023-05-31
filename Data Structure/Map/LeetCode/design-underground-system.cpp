class UndergroundSystem {
public:
    map<pair<string, string>, pair<double, int>> mp;
    map<int, pair<string, int>> ck;
    UndergroundSystem() {
       mp.clear();
       ck.clear(); 
    }
    
    void checkIn(int id, string stationName, int t) {
        ck[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        int d = mp[{ck[id].first, stationName}].second;
        double val = mp[{ck[id].first, stationName}].first;
        mp[{ck[id].first, stationName}] = {val+(t-ck[id].second), d+1};
    }
    
    double getAverageTime(string startStation, string endStation) {
        int d = mp[{startStation, endStation}].second;
        double val = mp[{startStation, endStation}].first;
        return val/d;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
