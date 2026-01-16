//APPROACH - I

class MyHashMap {
private:
    vector<int> data;
public:
    MyHashMap(): data(1000001, -1) {
        
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {  
        return data[key];
    }
    
    void remove(int key) {
        data[key] = -1;
    }
};


//APPROACH - II

class MyHashMap {
private:
    static const int SIZE = 1000;
    vector<list<pair<int , int>>>table;
    
    int hash(int key){
        return key % SIZE;
    }
public:
    MyHashMap() {
        table.resize(SIZE);
    }
    void put(int key, int value) {
        int idx = hash(key);
        for(auto &it : table[idx]){
            if(it.first == key){
                it.second = value;
                return;
            }
        }
        table[idx].push_back({key , value});
    }
    
    int get(int key) {
        int idx = hash(key);
        for(auto &it : table[idx]){
            if(it.first == key){
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int idx= hash(key);
        for(auto it = table[idx].begin();  it != table[idx].end(); it++){
            if(it->first == key){
                table[idx].erase(it);
                return;
            }
        }
    }
};
