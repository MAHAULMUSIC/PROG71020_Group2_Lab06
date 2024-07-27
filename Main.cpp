#include "Global.h"
#include "Rectangle.h"
#include "Circle.h"
#include "BMW.h"
#include "Mazda.h"
#include<iostream>

using namespace std;
/**
 * @file main.cpp
 * @brief Main program file.
 *
 * @mainpage madisont, adilf, armaanm - prog71020, lab 04 - source code
 *
 * @section MAIN_CONCEPTS
 * - Inheritance
 * - Function overriding
 * - Virtual function
 * - Pure virtual function
 * - Polymorphism
 * - Abstract classes
 *
 * @section REQUIREMENTS
 * You should write a well-structured, readable, and clean code that is based on all
 * concepts that you have studied so far.
 * In this lab the only limit is your imagination. Be creative!
 */

int main(void) {
    RECTANGLE rect(3, 4);
    RECTANGLE rect2(5, 6);
    CIRCLE circ(3);
    CIRCLE circ2(5);
    BMW bmw;
    MAZDA mazda;

    SHAPE* shapes[] = { &rect, &rect2, &circ, &circ2 };

    // Test drawing
    globaldraw(rect);
    globaldraw(circ2);
    globaldraw(bmw);
    globaldraw(mazda);

    // Test driving
    globaldrive(bmw);
    globaldrive(mazda);

    // Test global area function
    double globalArea = globalarea(shapes, 4);
    cout << "Total area of all shapes: " << globalArea << endl;

    return 0;
}
