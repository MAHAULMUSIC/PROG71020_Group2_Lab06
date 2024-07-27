#include "Circle.h"
#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

/**
 * @file Circle.cpp
 * @brief Implementation file for the CIRCLE class.
 */

 // Constructor
CIRCLE::CIRCLE(double radius) : r(radius) {}

// Calculates the area of the circle
double CIRCLE::area() {
    return 3.14159 * r * r;
}

// Draws the circle
void CIRCLE::draw() {
    cout << "Drawing a circle \n";
    int diameter = 2 * r;
    for (int i = 0; i <= diameter; ++i) {
        for (int j = 0; j <= diameter; ++j) {
            double distance = sqrt((i - r) * (i - r) + (j - r) * (j - r));
            if (distance > r - 0.5 && distance < r + 0.5) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
