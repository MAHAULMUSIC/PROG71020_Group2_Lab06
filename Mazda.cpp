#include "Mazda.h"
#include <iostream>

using namespace std;

/**
 * @file Mazda.cpp
 * @brief Implementation file for the MAZDA class.
 */

 // Draws the Mazda car
void MAZDA::draw() {
    cout << "     **Mazda**\n";
    cout << "    ___                MAZDA" << endl;
    cout << "      _-_-  _/\\______\\\\_|_" << endl;
    cout << "   _-_-__  / ,-. -|-  ,-.`-." << endl;
    cout << "      _-_- `( o )----( o )-'" << endl;
    cout << "             `-'      `-'" << endl;
}

// Represents driving the Mazda car
void MAZDA::drive() {
    cout << "Driving a Mazda.\n";
}

// Provides a dummy implementation for the area function
double MAZDA::area() {
    return 0.0;
}
