#pragma once

#include "Shape.h"

/**
 * @file Rectangle.h
 * @brief Header file for the RECTANGLE class.
 */

#ifndef RECTANGLE_LIBRARY_H
#define RECTANGLE_LIBRARY_H

 /**
  * @class RECTANGLE
  * @brief Class for handling rectangles.
  *
  * This class calculates the area and draws a rectangle.
  */
class RECTANGLE : public SHAPE {
    double l; ///< Length of the rectangle
    double b; ///< Breadth of the rectangle

public:
    /**
     * @brief Constructor for RECTANGLE.
     * @param length Length of the rectangle.
     * @param breadth Breadth of the rectangle.
     */
    RECTANGLE(double length, double breadth);

    /**
     * @brief Calculates the area of the rectangle.
     * @return The area of the rectangle.
     */
    double area() override;

    /**
     * @brief Draws the rectangle.
     */
    void draw() override;
};

#endif //RECTANGLE_LIBRARY_H
