#pragma once

#include "Shape.h"
#include "BMW.h"
#include "Mazda.h"

/**
 * @file Global.h
 * @brief Header file for global functions.
 */

#ifndef GLOBAL_LIBRARY_H
#define GLOBAL_LIBRARY_H

 /**
  * @brief Draws any shape.
  * @param obj Reference to a SHAPE object.
  */
void globaldraw(SHAPE& obj);

/**
 * @brief Drives a BMW car.
 * @param car Reference to a BMW object.
 */
void globaldrive(BMW& car);

/**
 * @brief Drives a Mazda car.
 * @param car Reference to a MAZDA object.
 */
void globaldrive(MAZDA& car);

/**
 * @brief Calculates the total area of an array of shapes.
 * @param shapes Array of pointers to SHAPE objects.
 * @param size Number of shapes in the array.
 * @return Total area of all shapes.
 */
double globalarea(SHAPE* shapes[], int size);

#endif //GLOBAL_LIBRARY_H
