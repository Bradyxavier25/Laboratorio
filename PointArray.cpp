#include <iostream>
#include "Punto.cpp"
using namespace std;

class PointArray {
private:
    Punto* points; 
    int size;      

public:
    
    PointArray() : points(nullptr), size(0) {}

    
    PointArray(int size) : size(size) {
        points = new Punto[size];
    }

    
    PointArray(const PointArray& other) : size(other.size) {
        points = new Punto[size];
        for (int i = 0; i < size; ++i) {
            points[i] = other.points[i];
        }
    }

    
    ~PointArray() {
        delete[] points;
    }

    
    PointArray& operator=(const PointArray& other) {
        if (this != &other) { 
            delete[] points; 

            size = other.size;
            points = new Punto[size];
            for (int i = 0; i < size; ++i) {
                points[i] = other.points[i];
            }
        }
        return *this;
    }

    
    Punto& operator[](int index) {
        return points[index];
    }

    const Punto& operator[](int index) const {
        return points[index];
    }

    
    int getSize() const {
        return size;
    }


    void display() const {
        for (int i = 0; i < size; ++i) {
            points[i].display();
            if (i < size - 1) cout << ", ";
        }
        cout << endl;
    }
};
