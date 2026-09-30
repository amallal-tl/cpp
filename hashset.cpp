class MyHashSet {
private:
    static const int SIZE = 10;
    vector<vector<int>> mapping;
public:
    MyHashSet() {
        mapping.resize(SIZE);
    }
    
    void add(int key) {
        int index = hashing(key);
        auto itr = find(mapping[index].begin(), mapping[index].end(), key);
        if(itr == mapping[index].end()){
            mapping[index].push_back(key);
        }
    }
    
    void remove(int key) {
        int index = hashing(key);
        auto itr = find(mapping[index].begin(), mapping[index].end(), key);
        if(itr != mapping[index].end()){
            mapping[index].erase(itr); 
        }
    }
    
    bool contains(int key) {
        int index = hashing(key);
        auto itr = find(mapping[index].begin(), mapping[index].end(), key);
        if(itr != mapping[index].end()){
            return true;
        }
        return false;
    }

    int hashing(int value){
        return value % SIZE;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */