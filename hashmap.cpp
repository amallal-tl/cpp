class MyHashMap {
    private:
    const static int SIZE = 10;
    vector<vector<pair<int, int>>> mappings;

    int hashing(int value){
        return value % 10;
    }

public:
    MyHashMap() {
        mappings.resize(SIZE);
    }
    
    void put(int key, int value) {
        int h = hashing(key);

        for(auto &p : mappings[h]){
            if(p.first == key){
                p.second = value;
                return;
            }
        }

        mappings[h].push_back({key, value});
    }
    
    int get(int key) {
        
    }
    
    void remove(int key) {
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */