#pragma once

/**
 * @file Drawable.h
 * @brief Header file for the Drawable class.
 */

#ifndef DRAWABLE_LIBRARY_H
#define DRAWABLE_LIBRARY_H

 /**
  * @class Drawable
  * @brief Abstract base class for drawable objects.
  *
  * This class includes a pure virtual function for drawing.
  */
class Drawable {
public:
    /**
     * @brief Pure virtual function to draw the object.
     */
    virtual void draw() = 0;
};

#endif //DRAWABLE_LIBRARY_H
