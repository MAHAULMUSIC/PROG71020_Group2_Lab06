#pragma once

/**
 * @file Vehicle.h
 * @brief Header file for the VEHICLE class.
 */

#include "Drawable.h"

 /**
  * @class VEHICLE
  * @brief Abstract base class for all vehicles.
  *
  * This class inherits from Drawable and includes a pure virtual function for driving.
  */
class VEHICLE : public Drawable {
public:
    /**
     * @brief Pure virtual function to represent driving the vehicle.
     *
     * This function must be implemented by all derived classes to specify how
     * the vehicle is driven.
     */
    virtual void drive() = 0;
};


