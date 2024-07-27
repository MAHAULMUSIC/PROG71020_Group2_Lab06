#pragma once

#include "Shape.h"

/**
 * @file Mazda.h
 * @brief Header file for the MAZDA class.
 */

#ifndef MAZDA_LIBRARY_H
#define MAZDA_LIBRARY_H

 /**
  * @class MAZDA
  * @brief Class for handling Mazda cars.
  *
  * This class includes methods to draw and drive a Mazda car.
  */
class MAZDA : public SHAPE {
public:
    /**
     * @brief Draws the Mazda car.
     */
    void draw() override;

    /**
     * @brief Represents driving the Mazda car.
     */
    void drive();

    /**
     * @brief Provides a dummy implementation for the area function.
     * @return A dummy value (0.0) as Mazda does not have an actual area.
     */
    double area() override;
};

#endif //MAZDA_LIBRARY_H
