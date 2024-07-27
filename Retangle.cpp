#include "Rectangle.h"
#include <iostream>

using namespace std;

/**
 * @file Rectangle.cpp
 * @brief Implementation file for the RECTANGLE class.
 */

 // Constructor
RECTANGLE::RECTANGLE(double length, double breadth) : l(length), b(breadth) {}

// Calculates the area of the rectangle
double RECTANGLE::area() {
    return l * b;
}

// Draws the rectangle
void RECTANGLE::draw() {
    cout << "Drawing a rectangle \n";
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < b; ++j) {
            if (i == 0 || i == l - 1 || j == 0 || j == b - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
