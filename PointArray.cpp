#include <iostream>
#include "Punto.cpp"
using namespace std;

class PointArray {
private:
    Punto* points; // Puntero dinámico a un arreglo de puntos.
    int size;      // Tamaño del arreglo.

public:
    // Constructor por defecto.
    PointArray() : points(nullptr), size(0) {}

    // Constructor con tamaño inicial.
    PointArray(int size) : size(size) {
        points = new Punto[size];
    }

    // Constructor de copia.
    PointArray(const PointArray& other) : size(other.size) {
        points = new Punto[size];
        for (int i = 0; i < size; ++i) {
            points[i] = other.points[i];
        }
    }

    // Destructor.
    ~PointArray() {
        delete[] points;
    }

    // Sobrecarga del operador de asignación.
    PointArray& operator=(const PointArray& other) {
        if (this != &other) { // Evitar autoasignación.
            delete[] points; // Liberar memoria actual.

            size = other.size;
            points = new Punto[size];
            for (int i = 0; i < size; ++i) {
                points[i] = other.points[i];
            }
        }
        return *this;
    }

    // Sobrecarga del operador [] para lectura/escritura.
    Punto& operator[](int index) {
        return points[index];
    }

    const Punto& operator[](int index) const {
        return points[index];
    }

    // Obtener el tamaño del arreglo.
    int getSize() const {
        return size;
    }

    // Imprimir los puntos del arreglo.
    void display() const {
        for (int i = 0; i < size; ++i) {
            points[i].display();
            if (i < size - 1) cout << ", ";
        }
        cout << endl;
    }
};
