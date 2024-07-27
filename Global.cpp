#include "Global.h"
#include <iostream>

using namespace std;

/**
 * @file Global.cpp
 * @brief Implementation file for global functions.
 */

 // Draws any shape
void globaldraw(SHAPE& obj) {
    obj.draw();
}

// Drives a BMW car
void globaldrive(BMW& car) {
    car.drive();
}

// Drives a Mazda car
void globaldrive(MAZDA& car) {
    car.drive();
}

// Calculates the total area of an array of shapes
double globalarea(SHAPE* shapes[], int size) {
    double totalarea = 0.00;

    for (int i = 0; i < size; i++) {
        totalarea += shapes[i]->area();
    }

    return totalarea;
}
