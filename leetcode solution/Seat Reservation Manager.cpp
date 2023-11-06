class SeatManager {
    int marker;
    priority_queue<int,vector<int>,greater<int>> available;
public:
    SeatManager(int n) {
        marker=1;
    }
    
    int reserve() {
        if(!available.empty()){
            int seat=available.top();
            available.pop();
            return seat;
        }
        int seat=marker;
        marker++;
        return seat;
    }
    
    void unreserve(int seatNumber) {
        available.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */