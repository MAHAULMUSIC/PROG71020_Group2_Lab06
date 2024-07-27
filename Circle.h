#pragma once

#include "Shape.h"

/**
 * @file Circle.h
 * @brief Header file for the CIRCLE class.
 */

#ifndef CIRCLE_LIBRARY_H
#define CIRCLE_LIBRARY_H

 /**
  * @class CIRCLE
  * @brief Class for handling circles.
  *
  * This class calculates the area and draws a circle.
  */
class CIRCLE : public SHAPE {
    double r; ///< Radius of the circle

public:
    /**
     * @brief Constructor for CIRCLE.
     * @param radius Radius of the circle.
     */
    CIRCLE(double radius);

    /**
     * @brief Calculates the area of the circle.
     * @return The area of the circle.
     */
    double area() override;

    /**
     * @brief Draws the circle.
     */
    void draw() override;
};

#endif //CIRCLE_LIBRARY_H
