class RecentCounter {
std::queue<int> store;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        while (!store.empty() && t - store.front() > 3000){
            store.pop();
        }
        store.push(t);
        return store.size();
    }
};