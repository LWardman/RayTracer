//
// Created by Wardy on 26/12/2022.
//

#ifndef RAYTRACINGWEEKEND_RTWEEKEND_H
#define RAYTRACINGWEEKEND_RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>
#include <random>

// Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility functions

inline double degrees_to_radians(double degrees) {
    return pi * degrees / 180.0;
}

inline double random_double() {
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator; // Not the best RNG available, but is cheap.
    return distribution(generator);
}

inline double random_double(double min, double max) {
    static std::uniform_real_distribution<double> distribution(min, max);
    static std::mt19937 generator; // Not the best RNG available, but is cheap.
    return distribution(generator);
}

inline double clamp(double x, double min, double max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

// Common headers

#include "ray.h"
#include "vec3.h"

#endif //RAYTRACINGWEEKEND_RTWEEKEND_H
