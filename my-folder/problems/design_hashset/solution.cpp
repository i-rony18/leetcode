class MyHashSet {
public:
    vector<int> value;
    MyHashSet() {
        value.resize(1e6+1,0);
    }
    
    void add(int key) {
        value[key]=1;
    }
    
    void remove(int key) {
        value[key]=0;
    }
    
    bool contains(int key) {
        return value[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */