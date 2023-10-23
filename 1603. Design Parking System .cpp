class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        // Initialize the available parking slots for each car type.
        availableSlots = {big, medium, small};
    }
    
    bool addCar(int carType) {
        // Check if there are available slots for the given car type.
        if (availableSlots[carType - 1] > 0) {
            availableSlots[carType - 1]--; // Reduce the available slots for this car type.
            return true; // Car can be parked.
        }
        return false; // No available slots for this car type.
    }

private:
    vector<int> availableSlots; // To store the available slots for each car type.
};
