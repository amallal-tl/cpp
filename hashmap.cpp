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
        int h = hashing(key);

        for(auto &p : mappings[h]){
            if(p.first == key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int h = hashing(key);

        for(auto itr = mappings[h].begin(); itr != mappings[h].end(); ++itr){
            if(itr->first == key){
                mappings[h].erase(itr);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */