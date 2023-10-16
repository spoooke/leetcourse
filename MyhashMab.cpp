class MyHashMap {
private:
    vector<vector<pair<int, int>>> data;
    const int capacity = 10000;  // Choose a prime number as the initial capacity.

    int hash(int key) {
        return key % capacity;
    }

public:
    MyHashMap() {
        data = vector<vector<pair<int, int>>(capacity, {-1, -1}));
    }

    void put(int key, int value) {
        int index = hash(key);
        for (auto& pair : data[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        data[index].push_back({key, value});
    }

    int get(int key) {
        int index = hash(key);
        for (auto& pair : data[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        int index = hash(key);
        data[index].remove_if([&](const pair<int, int>& pair) { return pair.first == key; });
    }
};
