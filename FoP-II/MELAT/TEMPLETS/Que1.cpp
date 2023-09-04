#include <iostream>

template<typename T, size_t n>
class Point {
private:
    T data[n];

public:
    Point() {
        for (size_t i = 0; i < n; ++i) {
            data[i] = T();
        }
    }

    void setCoordinate(size_t index, T value) {
        if (index < n) {
            data[index] = value;
        }
    }

    T getCoordinate(size_t index) const {
        if (index < n) {
            return data[index];
        }
        return T();
    }
};

int main() {
    // Create a Point with dimension 3 and internal data type as double
    Point<double, 3> point;

    // Set coordinates
    point.setCoordinate(0, 1.2);
    point.setCoordinate(1, 3.4);
    point.setCoordinate(2, -5.6);

    // Get coordinates
    double x = point.getCoordinate(0);
    double y = point.getCoordinate(1);
    double z = point.getCoordinate(2);

    std::cout << "Coordinates: (" << x << ", " << y << ", " << z << ")" << std::endl;

    return 0;
}
