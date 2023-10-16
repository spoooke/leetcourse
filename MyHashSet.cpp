class MyHashSet {
private:
    vector<bool> data;

public:
    MyHashSet() {
        data = vector<bool>(1000001, false); // Initialize the data structure to handle keys up to 10^6.
    }

    void add(int key) {
        if (key >= 0 && key <= 1000000) {
            data[key] = true; // Set the corresponding index to true to mark the key as present.
        }
    }

    void remove(int key) {
        if (key >= 0 && key <= 1000000) {
            data[key] = false; // Set the corresponding index to false to remove the key.
        }
    }

    bool contains(int key) {
        if (key >= 0 && key <= 1000000) {
            return data[key]; // Return the value at the corresponding index.
        }
        return false; // If the key is out of range, it is not present.
    }
};
