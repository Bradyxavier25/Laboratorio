#praga once 
#include<iostream>
using namespace std;
#include"PointArray.cpp"
#include"Punto.cpp"

int main() {
    
    Punto p1(1, 2), p2(3, 4);
    p1.display(); cout << endl;
    p2.display(); cout << endl;

    if (p1 != p2) cout << "Puntos diferentes." << endl;


    PointArray arr(3);
    arr[0] = Punto(5, 6);
    arr[1] = Punto(7, 8);
    arr[2] = Punto(9, 10);

    cout << "Contenido del arreglo: ";
    arr.display();

    return 0;
}
