#pragma once

#include "Drawable.h"

/**
 * @file Shape.h
 * @brief Header file for the SHAPE class.
 */

#ifndef SHAPE_LIBRARY_H
#define SHAPE_LIBRARY_H

 /**
  * @class SHAPE
  * @brief Abstract base class for all shapes.
  *
  * This class includes a pure virtual function for calculating area.
  */
class SHAPE : public Drawable {
public:
    /**
     * @brief Pure virtual function to calculate the area of the shape.
     * @return The area of the shape.
     */
    virtual double area() = 0;
};

#endif //SHAPE_LIBRARY_H
