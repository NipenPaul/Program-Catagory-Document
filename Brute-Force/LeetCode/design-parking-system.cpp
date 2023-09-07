class ParkingSystem {
public:
    int cnt[4];
    ParkingSystem(int big, int medium, int small) {
        cnt[1] = cnt[2] = cnt[3] = 0;
        cnt[1] = big; cnt[2] = medium; cnt[3] = small;
    }
    
    bool addCar(int carType) {
        if(cnt[carType] > 0){
            cnt[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
