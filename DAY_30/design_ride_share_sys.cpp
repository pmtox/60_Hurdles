class RideSharingSystem {
private:
    queue<int> rider;
    queue<int> driver;
    unordered_set<int> active;
public:
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        int rd = riderId;
        rider.push(rd);
        active.insert(rd);
    }
    
    void addDriver(int driverId) {
        int rd = driverId;
        driver.push(rd);
    }
    
    vector<int> matchDriverWithRider() {
        while (!rider.empty() && active.count(rider.front()) == 0) {
            rider.pop();
        }

        if (rider.empty() || driver.empty()) {
            return {-1, -1};
        }

        int driverId = driver.front(); driver.pop();
        int riderId = rider.front(); rider.pop();
        active.erase(riderId);

        return {driverId, riderId};
    }
    
    void cancelRider(int riderId) {
        active.erase(riderId);
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */