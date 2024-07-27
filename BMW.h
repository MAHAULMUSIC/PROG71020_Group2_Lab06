#pragma once

#include "Shape.h"

/**
 * @file BMW.h
 * @brief Header file for the BMW class.
 */

#ifndef BMW_LIBRARY_H
#define BMW_LIBRARY_H

 /**
  * @class BMW
  * @brief Class for handling BMW cars.
  *
  * This class includes methods to draw and drive a BMW car.
  */
class BMW : public SHAPE {
public:
    /**
     * @brief Draws the BMW car.
     */
    void draw() override;

    /**
     * @brief Represents driving the BMW car.
     */
    void drive();

    /**
     * @brief Provides a dummy implementation for the area function.
     * @return A dummy value (0.0) as BMW does not have an actual area.
     */
    double area() override;
};

#endif //BMW_LIBRARY_H
