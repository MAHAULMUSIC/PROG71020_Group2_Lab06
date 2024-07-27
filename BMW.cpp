#include "BMW.h"
#include <iostream>

using namespace std;

/**
 * @file BMW.cpp
 * @brief Implementation file for the BMW class.
 */

 // Draws the BMW car
void BMW::draw() {
    cout << "     **BMW**\n";
    cout << "        _______\n";
    cout << " BMW   //  ||\\ \\\n";
    cout << " _|___//___||_\\ \\___\n";
    cout << ")  _          _    \\\n";
    cout << "|_/ \\________/ \\___|\n";
    cout << "__\\_/________\\_/______\n";
}

// Represents driving the BMW car
void BMW::drive() {
    cout << "Driving a BMW.\n";
}

// Provides a dummy implementation for the area function
double BMW::area() {
    return 0.0;
}
